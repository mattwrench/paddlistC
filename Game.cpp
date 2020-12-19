#include "Game.h"

const int WINDOW_WIDTH = 1280;
const int WINDOW_HEIGHT = 720;

Game::Game()
	: window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Paddlist"),
    clock(),
    world(WINDOW_WIDTH, WINDOW_HEIGHT),
    input(window),
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

    input.update();

    playerController.update(dt);
}
