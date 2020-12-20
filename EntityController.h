#pragma once

#include "World.h"
class EntityController
{
public:
	EntityController(World& w);
	virtual void update(float dt) = 0;
protected:
	World& world;
	void setPosition(Entity& entity, float dt);
	virtual bool boundsCheck(Entity& entity) = 0; // Returns true if entity should be deleted
};

