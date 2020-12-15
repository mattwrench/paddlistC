#include "Renderer.h"


Renderer::Renderer(sf::RenderWindow& win, World& wor)
	: window(win),
	world(wor)
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

	// Paddles
	window.draw(world.player.sprite);
	window.draw(world.enemy.sprite);

	window.display();
}
