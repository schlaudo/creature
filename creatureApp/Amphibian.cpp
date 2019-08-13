#include "Amphibian.h"
#include <iostream>
using namespace std;

Amphibian::Amphibian(int weight, int size, string type, int numLegs)
: Animal(weight, size, type, numLegs)
{
	cout << "Konstruktor von Amphibian" << endl;
}

Amphibian::~Amphibian(void)
{
	cout << "Destruktor von Amphibian" << endl;
}

void Amphibian::showAttributes() const
{
	cout << "Ich bin eine Amphibie!" << endl;
	Animal::showAttributes();
}

void Amphibian::moveOn() const
{
	cout << "... Amphibie fortbewegen ... " << endl;
}
