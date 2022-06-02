#include <iostream>
#include <typeinfo>

using namespace std;

class Class1 {
protected:
	int x, y;
public:
	Class1(int a, int b) { x = a; y = b; };
	virtual void ShowData() = 0;
};

class Class2 : public Class1 {
public:
	Class2(int a, int b) : Class1(a, b) { ; }
	void ShowData();
};

void Class2::ShowData()
{
	cout << "ID: " << x << "Age" << y << endl;
}

class Class3 :public Class1 {
public:
	Class3(int a, int b) : Class1(a, b) { ; }
	void ShowData();
};

void Class3::ShowData()
{
	cout << "Tall: " << x << "Weight: " << y << endl;
}
int main()
{
	Class1* p;
	Class2 val1(2020, 31);
	Class3 val2(172, 64);

	p = &val1;
	if (typeid(*p) == typeid(Class2))
		cout << "First Object is Class2" << endl;
	else
		cout << "First Object is Class3" << endl;

	p = &val2;
	if (typeid(*p) == typeid(Class2))
		cout << "Second Object is Class2" << endl;
	else
		cout << "Second Object is Class3" << endl;

}
