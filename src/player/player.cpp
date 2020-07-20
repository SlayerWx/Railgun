#include "player.h"
namespace railgun
{
Player::Player()
{
}

Player::~Player()
{
}
void Player::Move()
{

}
void Player::SetX(int newX)
{
	x = newX;
}
int Player::GetX()
{
	return x;
}
void Player::SetY(int newY)
{
	y = newY;
}
int Player::GetY()
{
	return y;
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