#include <iostream>
#include "component1.h"
#include "component2.h"

using namespace std;

IComponent* getComponent(int);

int main(int argc, char** argv) {
	IComponent* pComp = NULL;
	cout << " --- component 1.0 ---" << endl;
	pComp = getComponent(1);
	pComp->func();
	delete pComp;
	pComp = NULL;

	cout << " --- component2 1.0 ---" << endl;
	pComp = getComponent(2);
	pComp->func();
	delete pComp;
}

IComponent* getComponent(int ver) {
	if (ver == 1) {
		return (IComponent*)(new Component1());
	}
	return (IComponent*)(new Component2());
}