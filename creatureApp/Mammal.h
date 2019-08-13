#pragma once
#include "animal.h"

class Mammal : public Animal
{
public:
	Mammal(int weight, int size, string type, int numLegs);
	~Mammal(void);

	virtual void showAttributes() const;
	virtual void moveOn() const;
};
