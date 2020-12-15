#pragma once

#include "Entity.h"

enum Team
{
	LEFT, RIGHT
};

class Paddle : public Entity
{
public:
	Paddle(Team t, int worldWidth, int worldHeight);
	Team team;
};

