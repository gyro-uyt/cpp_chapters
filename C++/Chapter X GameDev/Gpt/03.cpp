#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Player Movement");

    sf::RectangleShape player(sf::Vector2f(50.0f, 50.0f));
    player.setFillColor(sf::Color::Green);
    player.setPosition(375.0f, 275.0f);
    
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Move player with arrow keys
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
            player.move(-5.0f, 0.0f);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            player.move(5.0f, 0.0f);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
            player.move(0.0f, -5.0f);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
            player.move(0.0f, 5.0f);

        window.clear();
        window.draw(player);
        window.display();
    }

    return 0;
}

