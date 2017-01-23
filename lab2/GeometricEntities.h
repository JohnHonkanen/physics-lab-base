#pragma once
#include <glm\glm.hpp>

using namespace glm;
struct ParemetricLine {
	vec2 point;
	vec2 vector;
};

struct PointLine {
	vec2 point1;
	vec2 point2;
};

struct ExplicitLine {
	float m;
	float q;
};

struct ImplicitLine {
	float a, b, c;
};

struct Circle {
	vec2 position;
	float radius;
};