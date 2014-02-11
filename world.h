#pragma once

class World
{
private:
	World();
	~World();
public:
	static World& inst();

	bool Build();
};
