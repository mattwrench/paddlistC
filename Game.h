#pragma once

#include <SFML/Graphics.hpp>
#include "World.h"
#include "PlayerController.h"
#include "Renderer.h"

class Game
{
public:
	Game();
	void run();
private:
	sf::RenderWindow window;
	sf::Clock clock;
	World world;
	PlayerController playerController;
	Renderer renderer;
	void update();
};

