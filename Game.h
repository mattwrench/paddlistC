#pragma once

#include <SFML/Graphics.hpp>
#include "World.h"
#include "Renderer.h"

class Game
{
public:
	Game();
	void run();
private:
	sf::RenderWindow window;
	World world;
	Renderer renderer;
	void update();
};

