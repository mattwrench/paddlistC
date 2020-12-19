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
    }
}
