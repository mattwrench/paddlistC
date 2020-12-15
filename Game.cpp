#include "Game.h"

const int WINDOW_WIDTH = 1280;
const int WINDOW_HEIGHT = 720;

Game::Game()
	: window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Paddlist")
{
}

void Game::run()
{
    while (window.isOpen())
    {
        update();

        // TODO Add separate draw function
        window.clear();
        window.display();
    }
}

void Game::update()
{
	// Handle input
    sf::Event event;
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            window.close();
    }
}
