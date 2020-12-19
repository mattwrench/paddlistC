#pragma once

#include <SFML/Graphics.hpp>
#include "World.h"
#include "PlayerController.h"
#include "Renderer.h"
#include "InputHandler.h"

class Game
{
public:
	Game();
	void run();
private:
	sf::RenderWindow window;
	sf::Clock clock;
	World world;
	InputHandler input;
	PlayerController playerController;
	Renderer renderer;
	void update();
};

