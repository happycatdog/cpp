#ifndef _SMARTPHONE_H_
#define _SMARTPHONE_H_
#include <iostream>
#include "itelephone.h"
#include "imusicplayer.h"

using namespace std;

class SmartPhone : public ITelePhone, public IMusicPlayer {
public:
	void call(string number);
	void hung_up();

	void play();
	void stop();
};

#endif // !_SMARTPHONE_H_
