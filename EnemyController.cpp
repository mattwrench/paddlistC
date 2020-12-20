#include "EnemyController.h"

EnemyController::EnemyController(World& w)
	: PaddleController(w)
{
}

void EnemyController::update(float dt)
{
	setVelocity(world.enemy);
	setPosition(world.enemy, dt);
	boundsCheck(world.enemy);
}

// Enemy AI: move towards nearest ball
void EnemyController::setVelocity(Paddle& paddle)
{
	// TODO
}
