#pragma once
#include "GeometricEntities.h"
#include <limits.h>

class CollisionTest2D
{
public:
	CollisionTest2D();
	~CollisionTest2D();

	bool LineLine2DCollisionTest(ImplicitLine& lineA, ImplicitLine& lineB);
	int LineCircle2DCollisionTest(Circle& circle, ImplicitLine& line);
	int CircleCircle2DCollisionTest(Circle& circleA, Circle& circleB);

private:
	float PointLine2DDistance(vec2& point, ImplicitLine& line);
	float PointLine2DDistance(vec2& point, ParemetricLine& line);
	float PointLine2DDistance(vec2& point, PointLine& line);

	const double EPS = FLT_EPSILON;
};

