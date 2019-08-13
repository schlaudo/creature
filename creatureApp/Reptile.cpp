#include "Reptile.h"
#include <iostream>
using namespace std;

Reptile::Reptile(int weight, int size, string type, int numLegs)
: Animal(weight, size, type, numLegs)
{
	cout << "Konstruktor von Reptile" << endl;
}

Reptile::~Reptile(void)
{
	cout << "Destruktor von Reptile" << endl;
}

/*
void Reptile::showAttributes() const
{
	cout << "Ich bin ein Reptil!" << endl;
	Creature::showAttributes();
	cout << "Anzahl Beine: " << m_numLegs << endl;
}
*/

void Reptile::moveOn() const
{
	cout << "... Reptil fortbewegen ... " << endl;
}
