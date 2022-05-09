#include <iostream>
#include "smartphone.h"

using namespace std;

void usePhone(ITelePhone*);
void usePlayer(IMusicPlayer*);

int main(int argc, char** argv) {
	SmartPhone* pPhone = new SmartPhone();
	usePhone((ITelePhone*)pPhone);
	usePlayer((IMusicPlayer*)pPhone);
	delete pPhone;
	return 0;
}

void usePhone(ITelePhone* pPhone) {
	cout << "--- usePhone ---" << endl;
	pPhone->call("000-000-0000");
	pPhone->hung_up();
//	pPhone->play();
//	pPhone->stop();
	cout << "----------------" << endl;
}

void usePlayer(IMusicPlayer* pPhone) {
	cout << "--- usePlayer ---" << endl;
//	pPhone->call("000-000-0000");
//	pPhone->hung_up();
	pPhone->play();
	pPhone->stop();
	cout << "----------------" << endl;

}
