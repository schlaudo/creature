#pragma once
#include "animal.h"

class Amphibian : public Animal
{
public:
	Amphibian(int weight, int size, string type, int numLegs);
	~Amphibian(void);

	virtual void showAttributes() const;
	virtual void moveOn() const;
};
