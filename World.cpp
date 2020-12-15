#include "World.h"

World::World(int w, int h)
	: width(w),
	height(h),
	player(LEFT, w, h),
	enemy(RIGHT, w, h)
{
}
