#pragma once
#include "animal.h"

class Reptile : public Animal
{
public:
	Reptile(int weight, int size, string type, int numLegs);
	~Reptile(void);

	void moveOn() const;
};
