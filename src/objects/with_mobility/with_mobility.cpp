#include "with_mobility.h"
namespace railgun
{ 
const float WithMobility::distanceCheckerMaxDetection = 1.0f;
void WithMobility::Move(float timeScale)
{
	if (canMove.right && movement.right)
	{
		body.x += (speed * GetFrameTime()) * timeScale;
		if (body.x > mapLimitRight - body.width)
		{
			body.x = mapLimitRight - body.width;
		}
	}
	if (canMove.down && movement.down)
	{
		body.y += (speed * GetFrameTime()) * timeScale;
		if (body.y > mapLimitDown - body.height)
		{
			body.y = mapLimitDown - body.height;
		}
	}
	if (canMove.left && movement.left)
	{
		body.x -= (speed * GetFrameTime()) * timeScale;
		if (body.x < mapLimitLeft)
		{
			body.x = mapLimitLeft;
		}
	}
	if (canMove.up && movement.up)
	{
		body.y -= (speed * GetFrameTime()) * timeScale;
		if (body.y < mapLimitUp)
		{
			body.y = mapLimitUp;
		}
	}
}
void WithMobility::CheckCollision(float xCol, float yCol, float widthCol, float heightCol)
{

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
			body.x + distanceCheckerMaxDetection > xCol + widthCol)
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
}
void WithMobility::SetMapLimitInThisObject(Vector4 limits)
{
	mapLimitLeft = limits.x;
	mapLimitUp = limits.y;
	mapLimitRight = limits.z;
	mapLimitDown = limits.w;
}
//asAS
}