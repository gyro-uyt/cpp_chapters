#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
    // Print SFML version
    std::cout << "SFML Version: " << SFML_VERSION_MAJOR << "." << SFML_VERSION_MINOR << std::endl;

    // Create a window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Test Window");

    // Main loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) { // Close the window when X is clicked
                window.close();
            }
        }

        window.clear(sf::Color::Black); // Clear the window with black color
        window.display(); // Display the window
    }

    return 0;
}
