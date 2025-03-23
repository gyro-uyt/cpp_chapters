#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;
using namespace std;

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "Yokoso");

    RectangleShape rectangle1;
    rectangle1.setSize(sf::Vector2f(150, 70)); // Length X Breadth
    rectangle1.setFillColor(sf::Color::White);
    rectangle1.setPosition(sf::Vector2f(100, 50));

    Texture exitButton;
    if (!exitButton.loadFromFile("exitButton.jpg"))
    {
        cout << "Error: Could not load exitButton.jpg" << endl;
    }
    rectangle1.setTexture(&exitButton);

    RectangleShape backgroundRec;
    backgroundRec.setSize(sf::Vector2f(800, 800));

    Texture backgroundTexture;
    if (!backgroundTexture.loadFromFile("background.jpg"))
    {
        cout << "Error: Could not load background.jpg" << endl;
    }
    backgroundRec.setTexture(&backgroundTexture);

    // icon img
    Image icon;
    icon.loadFromFile("icon2.jpg");
    window.setIcon(icon.getSize().x, icon.getSize().y, icon.getPixelsPtr());

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Get mouse position relative to the window
        Vector2i mo = Mouse::getPosition(window);
        cout << "Mouse Position: " << mo.x << ", " << mo.y << endl;

        // Corrected button position check
        if (mo.x > 100 && mo.x < 250 && mo.y > 50 && mo.y < 120)
        {
            rectangle1.setFillColor(sf::Color::Red);
            if (Mouse::isButtonPressed(Mouse::Left))
            {
                rectangle1.setFillColor(sf::Color::Green);
                // window.close();  // Properly close the window
            }
        }
        else
        {
            rectangle1.setFillColor(sf::Color::White);
        }

        window.clear();
        window.draw(backgroundRec);
        window.draw(rectangle1);
        window.display();
    }

    return 0;
}
