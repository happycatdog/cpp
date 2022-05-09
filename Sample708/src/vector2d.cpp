#include "vector2d.h"
#include <math.h>

double const Vector2D::EPS = 0.1;

Vector2D& Vector2D::operator=(const Vector2D& v) {
	x = v.x;
	y = v.y;
	return *this;
}

Vector2D& Vector2D::operator+=(const Vector2D& v) {
	x += v.x;
	y += v.y;
	return *this;
}

Vector2D& Vector2D::operator-=(const Vector2D& v) {
	x -= v.x;
	y -= v.y;
	return *this;
}

bool Vector2D::operator==(const Vector2D& v) const{
	Vector2D diff;
	diff.x = x - v.x;
	diff.y = y - v.y;
	if(diff.length() < EPS) return true;
	else return false;
}

bool Vector2D::operator!=(const Vector2D& v) const{
	return !(*(this) == v);
}

double Vector2D::length() {
	double length;
	length = sqrt(x * x + y * y);
	return length;
}

Vector2D operator+(const Vector2D& v1, const Vector2D& v2) {
	Vector2D v;
	v.x = v1.x + v2.x;
	v.y = v1.y + v2.y;
	return v;
}

Vector2D operator-(const Vector2D& v1, const Vector2D& v2) {
	Vector2D v;
	v.x = v1.x - v2.x;
	v.y = v1.y - v2.y;
	return v;
}

Vector2D operator*(const double d, const Vector2D& v) {
	Vector2D r;
	r.x = d * v.x;
	r.y = d * v.y;
	return r;
}
