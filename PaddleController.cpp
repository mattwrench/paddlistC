#include "PaddleController.h"

PaddleController::PaddleController(World& w)
	: EntityController(w)
{
}

bool PaddleController::boundsCheck(Entity& entity)
{
	// Top wall
	if (entity.sprite.getPosition().y < 0)
	{
		entity.sprite.setPosition(entity.sprite.getPosition().x, 0);
	}

	// Bottom wall
	else if (entity.sprite.getPosition().y + entity.sprite.getGlobalBounds().height > world.height)
	{
		entity.sprite.setPosition(entity.sprite.getPosition().x,
			world.height - entity.sprite.getGlobalBounds().height);
	}

	return false;
}
