#include <iostream>
using namespace std;

void myfunc(int a) {
	cout << "int type parameter" << endl;
}

void myfunc(double a) {
	cout << "double type parameter" << endl;
}

template<typename T>
void myfunc(T a) {
	cout << "template type parameter" << endl;
}

int main()
{
	void (*func1)(int) = myfunc;
	void (*func2)(double) = myfunc;
	void (*func3)(char) = myfunc;

	func1(0);
	func2(0);
	func3(0);
}
