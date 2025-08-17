#include<iostream>
using namespace std;

int main() {
    // Bold text using ANSI escape codes
    cout << "\033[1mThis is bold text!\033[0m" << endl;

    // Regular text
    cout << "This is normal text." << endl;

    return 0;
}
