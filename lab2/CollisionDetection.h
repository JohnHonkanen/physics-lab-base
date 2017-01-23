#pragma once
#include "CollisionTest.h"
class CollisionDetection
{
public:
	CollisionDetection();
	~CollisionDetection();

	vec2 LineLine2DCollision(ImplicitLine& lineA, ImplicitLine& lineB);
	vec2 LineCircle2DCollision(ImplicitLine& line, Circle& circle);
	vec2 CircleCircle2DCollision(Circle& circleA, Circle& circleB);
private:
	CollisionTest2D* collisionTest;
};

