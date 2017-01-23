#include "CollisionTest.h"



CollisionTest2D::CollisionTest2D()
{
}


CollisionTest2D::~CollisionTest2D()
{
}

bool CollisionTest2D::LineLine2DCollisionTest(ImplicitLine & lineA, ImplicitLine & lineB)
{
	mat2 A(lineA.a, lineA.b, lineB.a, lineB.b);
	float det = determinant(A);
	return abs(det) > EPS;
}
