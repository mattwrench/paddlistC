#include "PlayerController.h"

PlayerController::PlayerController(World& w)
	: PaddleController(w)
{
}

void PlayerController::update(float dt)
{
	setVelocity(world.player);
	setPosition(world.player, dt);
	boundsCheck(world.player);
}

void PlayerController::setVelocity(Paddle& paddle)
{
	// TODO
}
