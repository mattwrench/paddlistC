#include "InputHandler.h"

InputHandler::InputHandler(sf::RenderWindow& win)
	: window(win),
	moveDown(false),
	moveUp(false)
{
}

void InputHandler::update()
{
    sf::Event event;
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            window.close();

        else if (event.type == sf::Event::KeyPressed)
        {
            if (event.key.code == sf::Keyboard::Down || event.key.code == sf::Keyboard::S)
            {
                moveDown = true;
            }
            else if (event.key.code == sf::Keyboard::Up || event.key.code == sf::Keyboard::W)
            {
                moveUp = true;
            }
        }

        else if (event.type == sf::Event::KeyReleased)
        {
            if (event.key.code == sf::Keyboard::Down || event.key.code == sf::Keyboard::S)
            {
                moveDown = false;
            }
            else if (event.key.code == sf::Keyboard::Up || event.key.code == sf::Keyboard::W)
            {
                moveUp = false;
            }
        }
    }
}
