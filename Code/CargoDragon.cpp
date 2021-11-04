#include "CargoDragon.h"

CargoDragon::CargoDragon()
{
	this->capsuleType = "Cargo Dragon";
}

void CargoDragon::simulate() 
{
	//Might need to add more stuff to output here
	cout << capsuleType << " State: " << state->getState() << endl;
}

void CargoDragon::test() 
{
	// TODO - implement CargoDragon::test
	throw "Not yet implemented";
}

double CargoDragon::getPayloadWeight() 
{
	return this->payloadWeight;
}
