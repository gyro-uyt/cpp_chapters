#include <SFML/Graphics.hpp>

int main() {
    // Create a game window (800x600 pixels, titled "SFML Window")
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window");

    // Game loop (keeps the window open)
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();  // Close the window when 'X' is pressed
        }

        // Clear screen, draw objects (none yet), and display
        window.clear(sf::Color::Black);
        window.display();
    }

    return 0;
}

