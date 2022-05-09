#ifndef _ITELEPHONE_H_
#define _ITELEPHONE_H_

#include <iostream>

using namespace std;

class ITelePhone {
public:
	virtual void call(string number) = 0;

	virtual void hung_up() = 0;

};

#endif // !_ITELEPHONE_H_
