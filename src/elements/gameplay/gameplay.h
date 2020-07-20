#ifndef GAMEPLAY_H
#define GAMEPLAY_H
#include "raylib.h"
#include "objects/player/player.h"
namespace railgun
{
class Gameplay
{
public:
	Gameplay();
	~Gameplay();
	Player* player;
	void Restart();
	void Input();
	void Update();
	void Draw();
private:
	float timeGameplayScale = 1.0f;
};
}
#endif