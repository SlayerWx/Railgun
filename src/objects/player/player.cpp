#include "player.h"
namespace railgun
{
Player::Player()
{
	body.width = width;
	body.height = height;
	body.x = 0.0f;
	body.y = 0.0f;
}

Player::~Player()
{
}
void Player::Input(float timeScale)
{
	Move(timeScale);
}
void Player::Move(float timeScale)
{
	if (IsKeyDown(KEY_RIGHT))
	{
		body.x += (speed * GetFrameTime()) * timeScale;
	}
	if (IsKeyDown(KEY_DOWN))
	{
		body.y += (speed * GetFrameTime()) * timeScale;
	}
	if (IsKeyDown(KEY_LEFT))
	{
		body.x -= (speed * GetFrameTime()) * timeScale;
	}
	if (IsKeyDown(KEY_UP))
	{
		body.y -= (speed * GetFrameTime()) * timeScale;
	}
}
void Player::SetLife(int newLife)
{
	life = newLife;
}
int Player::GetLife()
{
	return life;
}
}