#include "BallController.h"

const float SPAWN_RATE = 3.0;

BallController::BallController(World& w)
	: EntityController(w)
{
}

void BallController::update(float dt)
{
	spawnBalls(dt);

	for (auto iter = world.balls.begin(); iter != world.balls.end(); iter++)
	{ }
}

void BallController::boundsCheck(Entity& entity)
{
	// TODO
}

void BallController::spawnBalls(float dt)
{
	// TODO
}
