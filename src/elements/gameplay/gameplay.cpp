#include "gameplay.h"

#include "raylib.h"
#include "objects/player/player.h"
namespace railgun
{
Gameplay::Gameplay()
{
	player = new Player();
}
Gameplay::~Gameplay()
{
	if (player) delete player;
}
void Gameplay::Restart()
{
}
void Gameplay::Input()
{
	player->Input(timeGameplayScale);
}
void Gameplay::Update()
{
}
void Gameplay::Draw()
{
	player->Draw();
}
}