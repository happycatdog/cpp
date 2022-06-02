#include <iostream>

using namespace std;

class SuperClass {
public:
	virtual void Disp();
};

void SuperClass::Disp()
{
	cout << "Product Name is nothing" << endl;
}

class subClassA : public SuperClass {
public:
	void Disp();
};

void subClassA::Disp()
{
	cout << "Product Name is Product" << endl;
}

class subClassB :public SuperClass {
public:
	void Disp();
};

void subClassB::Disp()
{
	cout << "Product is Manufacture" << endl;
}

class subClassC :public SuperClass {
public:
	void Disp();
};

void subClassC::Disp()
{
	cout << "Product is Goods" << endl;
}

int main()
{
	SuperClass* obj[3];
	subClassA a;
	obj[0] = &a;
	subClassB b;
	obj[1] = &b;
	subClassC c;
	obj[2] = &c;

	for (int i = 0; i < 3; i++)
	{
		obj[i]->Disp();
		cout << "*************************" << endl;
	}
}
