#include "Mammal.h"
#include <iostream>
using namespace std;

Mammal::Mammal(int weight, int size, string type, int numLegs)
: Animal(weight, size, type, numLegs)
{
	cout << "Konstruktor von Mammal" << endl;
}

Mammal::~Mammal(void)
{
	cout << "Destruktor von Mammal" << endl;
}

void Mammal::showAttributes() const
{
	cout << "Ich bin ein Saeugetier!" << endl;
	Animal::showAttributes();
}

void Mammal::moveOn() const
{
	cout << "... Saeugetier fortbewegen ... " << endl;
}
