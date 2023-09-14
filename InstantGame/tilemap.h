#pragma once
#include "block.h"
#include "engine.h"

void createTilemap(float orX, float orY, std::string path, float sw, float sh, std::vector<std::vector<int>> map)
{
	int x = orX;
	int y = orY;
	for(int i = 0; i < map.size(); i++)
	{
		for(int e = 0; e < map[i].size(); e++)
		{
			if(map[i][e] == 1)
			{
				Engine::registerBlock(new Block(path, x, y, sw, sh));
			}
			x += sw;
		}
		y += sh;
		x = orX;
	}
}
