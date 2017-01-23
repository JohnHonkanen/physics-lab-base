#include "CollisionDetection.h"


CollisionDetection::CollisionDetection()
{
	this->collisionTest = new CollisionTest2D();
}


CollisionDetection::~CollisionDetection()
{
	delete(collisionTest);
}

vec2* CollisionDetection::LineLine2DCollision(ImplicitLine& lineA, ImplicitLine& lineB) {
	if (collisionTest->LineLine2DCollisionTest(lineA, lineB)) {
		mat2 A(lineA.a, lineA.b, lineB.a, lineB.b);
		vec2 b(-lineA.c, -lineB.c);
		mat2 iA = inverse(A);
		vec2 x = iA*b;
		return &x;
	}
	return nullptr;
}
