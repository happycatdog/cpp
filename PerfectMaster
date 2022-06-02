#include <iostream>

using namespace std;

void func_1(int a);
void func_2(int a);
void func_3(int a);

int main()
{
	int a;
	int& p = a;

	a = 10;
	cout << a << endl;
	cout << p << endl;

	p = 20;
	cout << a << endl;
	cout << p << endl;

	void(*funkp[])(int) = { func_1, func_2, func_3 };
	for (int i = 0; i < 3; i++) {
		funkp[i](500);
	}
}

void func_1(int a) {
	cout << "func_1 = " << a << endl;
}
void func_2(int a) {
	cout << "func_2 = " << a << endl;
}
void func_3(int a) {
	cout << "func_3 = " << a << endl;
}
