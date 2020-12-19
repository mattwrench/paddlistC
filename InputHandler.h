#pragma once

#include <SFML/Graphics.hpp>

class InputHandler
{
public:
	InputHandler(sf::RenderWindow& win);
	void update();
	bool moveDown, moveUp;
private:
	sf::RenderWindow& window;
};

