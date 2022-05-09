#include "smartphone.h"

void SmartPhone::call(string number) {
	cout << number << "is calling" << endl;

}

void SmartPhone::hung_up() {
	cout << "phone is hung up" << endl;
}

void SmartPhone::play() {
	cout << "music is playing" << endl;
}

void SmartPhone::stop() {
	cout << "music is stopping" << endl;
}