#include "PlayerController.h"

PlayerController::PlayerController(World& w, InputHandler& i)
	: PaddleController(w),
	input(i)
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
	paddle.velocity.x = 0;
	paddle.velocity.y = 0;

	if (input.moveDown)
	{
		paddle.velocity.y += paddle.topSpeed;
	}
	if (input.moveUp)
	{
		paddle.velocity.y -= paddle.topSpeed;
	}
}
