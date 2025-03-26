#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
    std::cout << "Starting SFML..." << std::endl;
    sf::RenderWindow window(sf::VideoMode(800, 600), "Test Window");

    if (!window.isOpen()) {
        std::cout << "Failed to open window!" << std::endl;
        return 1;
    }

    std::cout << "Window created successfully." << std::endl;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                std::cout << "Closing window..." << std::endl;
                window.close();
            }
        }

        window.clear(sf::Color::Blue);
        window.display();
    }

    std::cout << "Exited main loop." << std::endl;
    return 0;
}
