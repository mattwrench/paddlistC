#include "Renderer.h"

Renderer::Renderer(sf::RenderWindow& w)
	: window(w)
{
}

void Renderer::render()
{
	window.clear();
	window.display();
}
