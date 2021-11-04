#ifndef CARETAKER_H
#define CARETAKER_H

#include <string>
#include <iostream>

#include "Memento.h"

using namespace std;

class Caretaker {

private:
	Memento* store;

public:
	Caretaker();

	~Caretaker();

	void storeMemento(Memento* m);

	Memento* retrieveMemento();
};

#endif
