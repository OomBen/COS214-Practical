#ifndef CAPSULEDOCKED_H
#define CAPSULEDOCKED_H
 
#include "CapsuleState.h"

class CapsuleDocked : public CapsuleState 
{
	public:
		void changeInternalState();
		string getState();
};

#endif
