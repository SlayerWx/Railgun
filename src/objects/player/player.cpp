#include "player.h"
namespace railgun
{
const float Player::distanceCheckerMaxDetection = 1.0f;
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
void Player::Move(float timeScale)
{
	if (canMove.right && movement.right)
	{
		body.x += (speed * GetFrameTime()) * timeScale;
	}
	if (canMove.down && movement.down)
	{
		body.y += (speed * GetFrameTime()) * timeScale;
	}
	if (canMove.left && movement.left)
	{
		body.x -= (speed * GetFrameTime()) * timeScale;
	}
	if (canMove.up && movement.up)
	{
		body.y -= (speed * GetFrameTime()) * timeScale;
	}
}
void Player::CheckCollision(float xCol, float yCol, float widthCol, float heightCol)
{
	xCol = xCol;
	yCol = yCol;
	widthCol = widthCol;
	heightCol = heightCol;

	if (movement.right)
	{
		if (body.x + body.width > xCol && body.y + body.height > yCol && body.y < yCol + heightCol &&
			body.x + body.width - distanceCheckerMaxDetection < xCol)
		{
			canMove.right = false;
		}
	}
	if (movement.left)
	{
		if (body.x < xCol + widthCol && body.y + body.height > yCol && body.y < yCol + heightCol &&
			body.x + distanceCheckerMaxDetection > xCol + widthCol )
		{
			canMove.left = false;
		}
	}
	if (movement.up)
	{
		if (body.y < yCol + heightCol && body.x + body.width > xCol && body.x < xCol + widthCol &&
			body.y + distanceCheckerMaxDetection > yCol + heightCol)
		{
			canMove.up = false;
		}
	}
	if (movement.down)
	{
		if (body.y + body.height < yCol && body.x + body.width > xCol && body.x < xCol + widthCol &&
			body.y + body.height + distanceCheckerMaxDetection > yCol)
		{
			canMove.down = false;
		}
	}
}//asAS
void Player::SetLife(int newLife)
{
	life = newLife;
}
int Player::GetLife()
{
	return life;
}
}