#ifndef WITH_MOBILITY_H
#define WITH_MOBILITY_H
#include "objects/object.h"
namespace railgun
{ 
struct DirectionChecker
{
	bool right = false;
	bool left = false;
	bool up = false;
	bool down = false;
};
class WithMobility : public Object
{
public:
	void Move(float timeScale);
	void CheckCollision(float xCol, float yCol, float widthCol, float heightCol);

protected:
	float speed = 150.0f;
	DirectionChecker movement;
	DirectionChecker canMove;
	static const float distanceCheckerMaxDetection;
};
}
#endif
