#include "EntityController.h"

EntityController::EntityController(World& w)
	: world(w)
{
}

// Add velocity * dt to sprite's position
void EntityController::setPosition(Entity& entity, float dt)
{
	entity.sprite.setPosition(
		entity.sprite.getPosition().x + entity.velocity.x * dt,
		entity.sprite.getPosition().y + entity.velocity.y * dt
	);
}
