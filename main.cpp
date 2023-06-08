#include <SFML/Graphics.hpp>
#include "engine.hpp"

int main()
{

    sf::RenderWindow window(sf::VideoMode(800, 600), "Demo");
    window.setFramerateLimit(60);
    sf::CircleShape ball(50);
    ball.setFillColor(sf::Color::Red);
    ball.setPosition(50, 100);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        ball.setPosition(100, updatePosition());
        window.clear();
        window.draw(ball);
        window.display();
    }

    return 0;
}