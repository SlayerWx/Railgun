#include "map.h"
#include <stdlib.h>
#include <time.h>
#include "raylib.h"
#include "objects/obstacle/obstacle.h"
namespace railgun
{
Map::Map()
{
	(time(NULL));
	for (int i = 0; i < maxQuantityObs; i++)
	{
		obs[i] = new Obstacle();
	}
	MapGenerator();
}
Map::~Map()
{
	if (obs)
	{
		delete[] obs;
	}
}
void Map::MapGenerator()
{

}
void Map::Draw()
{
	for (int i = 0; i < maxQuantityObs; i++)
	{
		obs[i]->Draw();
	}
}
}