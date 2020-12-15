#pragma once

#include <SFML/Graphics.hpp>

class Renderer
{
public:
	Renderer(sf::RenderWindow& w);
	void render();
private:
	sf::RenderWindow& window;
};

