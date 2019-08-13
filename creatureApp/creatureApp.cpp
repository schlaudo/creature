// creatureApp.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include "Creature.h"
#include "HumanBeing.h"
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

	return 0;
}

