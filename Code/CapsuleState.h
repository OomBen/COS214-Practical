#ifndef CAPSULESTATE_H
#define CAPSULESTATE_H

#include <iostream>
#incldue <string>

using namespace std;

class CapsuleState 
{
	public:
		virtual void changeInternalState() = 0;
		virtual string getState() = 0;
};

#endif
