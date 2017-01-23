#include "CollisionDetection.h"



CollisionDetection::CollisionDetection()
{
	this->collisionTest = new CollisionTest2D();
}


CollisionDetection::~CollisionDetection()
{
	delete(collisionTest);
}
