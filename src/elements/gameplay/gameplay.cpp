#include "gameplay.h"

#include "raylib.h"
#include "objects/player/player.h"
#include "objects/floor/floor.h"
namespace railgun
{
Gameplay::Gameplay()
{
	player = new Player();
	player->SetPosition(0.0f,0.0f);
	player->SetColor(BLUE);
	floor = new Floor();
	floor->SetPosition(200.0f, 200.0f);
	floor->SetColor(GREEN);
}
Gameplay::~Gameplay()
{
	if (floor) delete floor;
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
	floor->Draw();
	player->Draw();
}
}