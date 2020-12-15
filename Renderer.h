#pragma once

#include <SFML/Graphics.hpp>
#include "World.h"

class Renderer
{
public:
	Renderer(sf::RenderWindow& win, World& wor);
	void render();
private:
	sf::RenderWindow& window;
	World& world;
	sf::Texture backgroundTexture;
	sf::Sprite background;
};

