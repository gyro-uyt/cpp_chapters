#include <SFML/Graphics.hpp>
using namespace sf;
#include <iostream>
using namespace std;

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "Yokoso");

    RectangleShape rectangle1;
    // here RectangleShape or sf::RectangleShape is a Class of whom I have created a object named rectangle1
    rectangle1.setSize(sf::Vector2f(150, 70)); // Lenght X Breadth
    rectangle1.setFillColor(sf::Color::White);
    rectangle1.setPosition(sf::Vector2f(100, 50));

    Texture exitButton;
    exitButton.loadFromFile("exitButton.jpg");
    rectangle1.setTexture(&exitButton);

    RectangleShape backgroundRec;
    backgroundRec.setSize(sf::Vector2f(800, 800));

    Texture backgroundTexture;
    backgroundTexture.loadFromFile("background.jpg");
    backgroundRec.setTexture(&backgroundTexture);

    // sf::Mouse   ---> this is same as below, Bcz. we have used the Line 2
    Mouse mose;
    
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            window.close();
        }
        
        // setting the position of mouse relative to the Opened app
        sf::Vector2i windowPosition;
        windowPosition.x = window.getPosition().x;
        windowPosition.y = window.getPosition().y;
        cout << windowPosition.y << "    " << windowPosition.x << endl;
        
        Vector2i mo = Mouse::getPosition(window);
        mo.y = mose.getPosition().y;
        mo.x = mose.getPosition().x;
        // cout << mo.y << "    " << mo.x << endl;

        if (mo.x > 100 && mo.x < 250 && mo.y > 50 && mo.y < 120)
        {
            rectangle1.setFillColor(sf::Color::Red);
            if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
            {
                rectangle1.setFillColor(sf::Color::Green);
                // window.close();  // ---> Program Not Working when Ran Again
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