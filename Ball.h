#pragma once
#include "Entity.h"
#define _USE_MATH_DEFINES // Allows for access to M_PI
#include <math.h>
class Ball : public Entity
{
public:
	Ball(int worldWidth, int worldHeight);
	bool remove;
};

