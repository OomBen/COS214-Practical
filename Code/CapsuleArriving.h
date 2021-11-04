#ifndef CAPSULEARRIVING_H
#define CAPSULEARRIVING_H

#include "CapsuleState.h"

class CapsuleArriving : public CapsuleState {


public:
	void changeInternalState();
	string getState();
};

#endif
