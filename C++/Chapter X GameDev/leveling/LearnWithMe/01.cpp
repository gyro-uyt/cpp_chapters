#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;
using namespace sf;

int main()
{
    sf::RenderWindow window(sf::VideoMode(600,600), "arise");

    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    sf::CircleShape ycirlce(77.f);
    ycirlce.setFillColor(sf::Color::Yellow);
    
    sf::CircleShape bcirlce(57.f);
    bcirlce.setFillColor(sf::Color::Blue);
    
    sf::CircleShape wcirlce(37.f);
    wcirlce.setFillColor(sf::Color::White);

    while (window.isOpen())
    {
        // actions done by user is event
        sf::Event event;

        // poll events are the title bar buttons ---> clase minimise maximise
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
        window.clear();
        window.draw(shape);
        window.draw(ycirlce);
        window.draw(bcirlce);
        window.draw(wcirlce);
        window.display();
    }
    return 0;
}
