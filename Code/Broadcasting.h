#ifndef BROADCASTING_H
#define BROADCASTING_H

#include "SatelliteState.h"

class Broadcasting : public SatelliteState 
{
	public:
		void changeInternalState();
		string getType();
};

#endif
