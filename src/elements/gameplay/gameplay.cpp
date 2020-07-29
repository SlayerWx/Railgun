#include "gameplay.h"

#include "raylib.h"

#include "objects/player/player.h"
#include "objects/obstacle/obstacle.h"
namespace railgun
{
Gameplay::Gameplay()
{
	player = new Player();
	player->SetPosition(0.0f,0.0f);
	player->SetColor(BLUE);
	map = new Map();
	player->SetMapLimitInThisObject(map->LimitMap());
	player->SetX(50.0f);
	player->SetY(200.0f);
	//obstacle->SetPosition(200.0f, 200.0f);
	//obstacle->SetColor(GREEN);
}
Gameplay::~Gameplay()
{
	if (map) delete map;
	if (player) delete player;
}
void Gameplay::Restart()
{
}
void Gameplay::Input()
{
	player->Input();
}
void Gameplay::Update()
{
	//player->CheckCollision(obstacle->GetX(),obstacle->GetY(),obstacle->GetWidth(),obstacle->GetHeight());
	player->Move(timeGameplayScale);
}
void Gameplay::Draw()
{
	map->Draw();
	player->Draw();
}
}