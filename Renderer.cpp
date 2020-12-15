#include "Renderer.h"

Renderer::Renderer(sf::RenderWindow& w)
	: window(w)
{
	backgroundTexture.loadFromFile("Assets/Images/background.png");
	background.setTexture(backgroundTexture);
	background.setPosition(0, 0);
}

void Renderer::render()
{
	window.clear();

	// Background
	window.draw(background);

	window.display();
}
