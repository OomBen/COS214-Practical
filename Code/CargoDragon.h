#ifndef CARGODRAGON_H
#define CARGODRAGON_H

#include "RocketCapsule.h"

class CargoDragon : public RocketCapsule 
{
	private:
		double payloadweight;

	public:
		CargoDragon();
		void simulate();
		void test();
		double getPayloadWeight();
};

#endif
