// creatureApp.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//
#include "stdafx.h"
#include "Creature.h"
#include "HumanBeing.h"
#include "Animal.h"
#include "Reptile.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	HumanBeing*	pHuman = new HumanBeing(71, 175, "Mann", 2, 2);
	//cout << "Gewicht: " << pHuman->getWeight() << endl;
	cout << endl;
	pHuman->showAttributes();

	cout << endl;
	pHuman->moveOn();

	cout << endl;
	delete pHuman;

	cout << endl;

	Animal* pAnimal = new Animal(21, 45, "Hund", 4);
	//cout << "Gewicht: " << pAnimal->getWeight() << endl;
	cout << endl;
	pAnimal->showAttributes();

	cout << endl;
	pAnimal->moveOn();

	cout << endl;
	delete pAnimal;

	Reptile* pReptile = new Reptile(1, 30, "Bartagame", 4);
	//cout << "Gewicht: " << pReptile->getWeight() << endl;
	cout << endl;
	pReptile->showAttributes();

	cout << endl;
	pReptile->moveOn();

	cout << endl;
	delete pReptile;

	return 0;
}

