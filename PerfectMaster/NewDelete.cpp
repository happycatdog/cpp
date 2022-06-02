#include <iostream>

void* operator new(size_t objsize)
{
	std::cout << objsize << "Bytes" << std::endl;
	return(malloc(objsize));
}
void* operator new[](size_t objsize)
{
	std::cout << objsize << "Bytes" << std::endl;
	return(malloc(objsize));
}
void operator delete(void* p)
{
	std::cout << std::hex << p << "Bytes is Released" << std::endl;
}
void operator delete[](void* p)
{
	std::cout << std::hex << p << "Bytes is Released" << std::endl;
}

int main() {
	int* p = (int *) new int;
	int* p_array = (int *) new int[100];
	delete p;
	delete[] p_array;
}
