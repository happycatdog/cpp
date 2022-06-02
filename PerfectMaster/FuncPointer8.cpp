#include <iostream>
using namespace std;

int myfunc1(int a, char b) {
	printf("a:%d, b:%c", a, b);
	return a + 10;
}

int myfunc2(int a, char b) {
	printf("a:%d, b:%c", a, b);
	return a - 10;
}

int main()
{
	int (*funcP)(int, char);

	for (int i = 0; i < 2; i++) {
		if (i == 0) {
			funcP = myfunc1;
		}
		else {
			funcP = myfunc2;
		}

		int result;
		result = (*funcP)(100, 'a');
		printf("result:%d",result);
	}
}
