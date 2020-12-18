#include "Game.h"

const int WINDOW_WIDTH = 1280;
const int WINDOW_HEIGHT = 720;

Game::Game()
	: window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Paddlist"),
    clock(),
    world(WINDOW_WIDTH, WINDOW_HEIGHT),
    playerController(world),
    renderer(window, world)
{
}

void Game::run()
{
    while (window.isOpen())
    {
        update();
        renderer.render();
    }
}

void Game::update()
{
    // Get dt
    sf::Time time = clock.restart();
    float dt = time.asSeconds();

	// Handle input
    sf::Event event;
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            window.close();
    }

    playerController.update(dt);
}
