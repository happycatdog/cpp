#include <iostream>

using namespace std;

int main()
{
	int array[5] = { 1,2,3,4,5 };
	int* p = array;
	const int* const_p = array;
	int* const con_p = array;

	*(p + 1) = 500;
	//*(const_p + 1) = 500;
	*(con_p + 1) = 500;
	//con_p = &array[2];
	cout << "2 : " << *(p + 1) << endl;
	cout << "2 : " << *(con_p + 1) << endl;
}
