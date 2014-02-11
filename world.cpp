#include "DXUT.h"
#include "world.h"

World& World::inst()
{
	static World w;
	return w;
}

World::World()
{
}

World::~World()
{
}

bool World::Build()
{
	return true;
}