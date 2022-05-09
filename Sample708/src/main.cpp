#include <iostream>
#include "vector2d.h"

using namespace std;

void vec(string, const Vector2D&);

int main(int argc, char** argv) {
	Vector2D v1, v2, v3, v4, v5;

	v1.x = 1.0;
	v1.y = 2.0;
	v2 = v1;
	v3 = 4.0 * v1;
	vec("v1=", v1);
	vec("v2=", v2);
	vec("v1 + v2=", v1 + v2);
	vec("v3=", v3);
	v3 += v1;
	vec("v3=", v3);
	v1 -= v2;
	vec("v1=", v1);
	
	v4.x = 1.0;
	v4.y = 1.0;
	v5 = v4 = v2;
	vec("v4=", v4);

	if (v4 == v5) { cout << "same data" << endl; }
	else { cout << "different data" << endl; }

	if (v2 != v4) { cout << "different data" << endl; }
	else { cout << "same data" << endl; }

	return 0;
}

void vec(string vecname, const Vector2D& v) {
	cout << vecname << "(" << v.x << "," << v.y << ")" << endl;
}
