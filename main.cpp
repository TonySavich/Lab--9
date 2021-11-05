#include <SFML/Graphics.hpp>
#include <thread>
#include <chrono>

using namespace std::chrono_literals;
int main()
{
    sf::RenderWindow window(sf::VideoMode(600, 600), "SFML works!");
    sf::RectangleShape rectangle(sf::Vector2f(120, 50));
    rectangle.setFillColor(sf::Color::Green);
    int y = 550;
    rectangle.setPosition(480, y);

    sf::RectangleShape rectanglee(sf::Vector2f(50, 120));
    rectanglee.setFillColor(sf::Color::Red);
    int yy = 480;
    rectanglee.setPosition(250, yy);

    sf::RectangleShape rectangleee(sf::Vector2f(50, 20));
    rectangleee.setFillColor(sf::Color::Blue);
    int yyy = 580;
    rectangleee.setPosition(100, yyy);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        if (y > 0) {
            y--;
            rectangle.setPosition(480, y);
        }

        if (yy > 0) {
            yy=yy-2;
            rectanglee.setPosition(250, yy);
        }

        if (yyy > 0) {
            yyy=yyy-5;
            rectangleee.setPosition(100, yyy);
        }


        window.clear();
        window.draw(rectangle);
        window.draw(rectanglee);
        window.draw(rectangleee);
        window.display();

        std::this_thread::sleep_for(40ms);
    }

    return 0;
}
