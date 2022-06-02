#include <iostream>
#include <string>

class Customer {
public:
	int number;
	std::string name;
	Customer(int n);
	Customer(const Customer &obj);
	~Customer();
};

Customer::Customer(int n)
{
	number = n;
	name = "no name";
	std::cout << "Constructor is called" << std::endl;
}
Customer::Customer(const Customer &obj)
{
	number = obj.number + 1;
	name = obj.name;
	std::cout << "Copy Constructor is called" << std::endl;
}
Customer::~Customer()
{
	std::cout << "Destructor is called" << std::endl;
}
void Disp(Customer obj);

int main()
{
	Customer coco(1010);
	coco.name = "Chanel Coco";

	std::cout << "Disp() is called" << std::endl;
	Disp(coco);
}
void Disp(Customer obj)
{
	std::cout << "Customer Number: " << obj.number << std::endl;
	std::cout << "Customer Name: " << obj.name << std::endl;
}
