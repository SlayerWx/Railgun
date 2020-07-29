#include "player.h"
namespace railgun
{
Player::Player()
{
	body.width = 20.0f;
	body.height = 20.0f;
	body.x = 0.0f;
	body.y = 0.0f;
}

Player::~Player()
{
}
void Player::Input()
{
	movement = { false,false,false,false};
	canMove = {true,true,true,true};
	if (IsKeyDown(KEY_RIGHT))
	{
		movement.right = true;
	}
	if (IsKeyDown(KEY_DOWN))
	{
		movement.down = true;
	}
	if (IsKeyDown(KEY_LEFT))
	{
		movement.left = true;
	}
	if (IsKeyDown(KEY_UP))
	{
		movement.up = true;
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