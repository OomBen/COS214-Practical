#ifndef CAPSULEDEPARTING_H
#define CAPSULEDEPARTING_H

#include "CapsuleState.h"

class CapsuleDeparting : public CapsuleState 
{
	public:
		void changeInternalState();
		string getState();
};

#endif
