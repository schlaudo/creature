// creatureApp.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//
#include "stdafx.h"
#include "Creature.h"
#include "HumanBeing.h"
#include "Animal.h"
#include "Reptile.h"
#include "Mammal.h"
#include "Amphibian.h"
#include <iostream>
using namespace std;


void showMenu()
{
	cout << endl;
	cout << "Mann ............. 1" << endl;
	cout << "Frau ............. 2" << endl;
	cout << "Bartagame ........ 3" << endl;
	cout << "Robbe ............ 4" << endl;
	cout << "Frosch ........... 5" << endl;
	cout << "Programmende ..... 9" << endl << endl;
	cout << "Ihre Wahl: ";
}

int _tmain(int argc, _TCHAR* argv[])
{
	HumanBeing*	pHumanBeing;
	Reptile*	pReptile;
	Mammal*		pMammal;
	Amphibian*	pAmphibian;
	int			selection;

	do
	{
		showMenu();
		cin >> selection;
		cout << endl;

		pHumanBeing = NULL;
		pReptile = NULL;

		switch (selection)
		{
		case 1:
			pHumanBeing = new HumanBeing(75, 182, "Mann", 2, 2);
			break;
		case 2:
			pHumanBeing = new HumanBeing(53, 167, "Frau", 2, 2);
			break;
		case 3:
			pReptile = new Reptile(1, 30, "Bartagame", 4);
			break;
		case 4:
			pMammal = new Mammal(250, 200, "Robbe", 0);
			break;
		case 5:
			pAmphibian = new Amphibian(1, 12, "Frosch", 4);
			break;
		case 9:
			cout << endl << "Programmende!" << endl;
			break;
		default:
			cout << endl << "Falsche Eingabe!" << endl << endl;
			break;
		}

		cout << endl;
		//now we have a lot of code,
		//100 pages later on ...
		if (pHumanBeing != NULL)
			pHumanBeing->showAttributes();
		else if (pMammal != NULL)
			pMammal->showAttributes();
		else if (pReptile != NULL)
			pReptile->showAttributes();
		else if (pAmphibian != NULL)
			pAmphibian->showAttributes();

		cout << endl;
		//... again there is a lot of code,
		//150 pages later ...
		if (pHumanBeing != NULL)
			pHumanBeing->moveOn();
		else if (pMammal != NULL)
			pMammal->moveOn();
		else if (pReptile != NULL)
			pReptile->moveOn();
		else if (pAmphibian != NULL)
			pAmphibian->moveOn();

		cout << endl;
		//... 50 pages later ...
		//don't forget to delete the objects
		if (pHumanBeing != NULL)
			delete pHumanBeing;
		else if (pMammal != NULL)
			delete pMammal;
		else if (pReptile != NULL)
			delete pReptile;
		else if (pAmphibian != NULL)
			delete pAmphibian;

	} while (selection != 9);

	return 0;
}

