#include <iostream>
#include <cmath>
#include <cstring>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    const int screenWidth = 80;  // Screen width
    const int screenHeight = 40; // Screen height
    const float A_STEP = 0.04f;  // Rotation speed for A (angle around X-axis)
    const float B_STEP = 0.02f;  // Rotation speed for B (angle around Z-axis)

    char screen[screenWidth * screenHeight]; // Screen buffer
    memset(screen, ' ', sizeof(screen));

    const float R1 = 1.0f; // Small radius
    const float R2 = 2.0f; // Large radius
    const float K1 = 15.0f; // Distance factor
    const float K2 = 5.0f;  // Intensity factor

    float A = 0.0f, B = 0.0f;

    while (true) {
        memset(screen, ' ', sizeof(screen)); // Clear screen

        float zBuffer[screenWidth * screenHeight]; // Depth buffer
        memset(zBuffer, 0, sizeof(zBuffer));

        for (float theta = 0; theta < 2 * M_PI; theta += 0.07f) {
            for (float phi = 0; phi < 2 * M_PI; phi += 0.02f) {
                float cosTheta = cos(theta), sinTheta = sin(theta);
                float cosPhi = cos(phi), sinPhi = sin(phi);
                float cosA = cos(A), sinA = sin(A);
                float cosB = cos(B), sinB = sin(B);

                // Calculate 3D coordinates
                float circleX = R2 + R1 * cosTheta;
                float circleY = R1 * sinTheta;

                float x = circleX * (cosB * cosPhi + sinA * sinB * sinPhi) - circleY * cosA * sinB;
                float y = circleX * (sinB * cosPhi - sinA * cosB * sinPhi) + circleY * cosA * cosB;
                float z = K2 + cosA * circleX * sinPhi + circleY * sinA;
                float ooz = 1 / z; // "One over z" for depth

                // Projection to 2D screen
                int xp = static_cast<int>(screenWidth / 2 + K1 * ooz * x);
                int yp = static_cast<int>(screenHeight / 2 - K1 * ooz * y);

                // Calculate luminance
                float L = cosPhi * cosTheta * sinB - cosA * cosTheta * sinPhi - sinA * sinTheta + cosB * (cosA * sinTheta - cosTheta * sinPhi);
                if (L > 0) {
                    int index = xp + yp * screenWidth;
                    if (index >= 0 && index < screenWidth * screenHeight) {
                        if (ooz > zBuffer[index]) {
                            zBuffer[index] = ooz;
                            int luminanceIndex = static_cast<int>(L * 8);
                            screen[index] = ".,-~:;=!*#$@"[luminanceIndex];
                        }
                    }
                }
            }
        }

        // Display frame
        cout << "\x1b[H"; // Move cursor to the top
        for (int k = 0; k < screenWidth * screenHeight; k++) {
            cout << (k % screenWidth ? screen[k] : '\n');
        }

        A += A_STEP;
        B += B_STEP;

        this_thread::sleep_for(chrono::milliseconds(30)); // Control speed
    }

    return 0;
}
