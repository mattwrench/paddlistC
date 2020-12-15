#pragma once

#include <SFML/Graphics.hpp>
#include "Renderer.h"

class Game
{
public:
	Game();
	void run();
private:
	sf::RenderWindow window;
	Renderer renderer;
	void update();
};

