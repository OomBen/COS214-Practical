#ifndef CAPSULEOFFLINE_H
#define CAPSULEOFFLINE_H

#include "CapsuleState.h"

class CapsuleOffline : public CapsuleState 
{
	public:
		void changeInternalState();
		string getState();
};

#endif
