//============================================================================
// Name        : BatailleNavale.cpp
// Author      : Nadine Giasson St-Amand
// Version     :
// Copyright   : (c) LudiJeu
// Description : Une bataille navale pour tester des classes bateau
//============================================================================

#include <iostream>
#include "Bateau.h"
using namespace std;

int main()
{
	cout << "!!! Je vous répondrai par la bouche de mes canons !!!" << endl; // prints !!! Je vous répondrai par la bouche de mes canons !!!
	//cerr << "Voici un message d'erreur";

	int quantite = 0;
	float vitesse = 0.0;

	string penseeDuJour = "Toutes les maladies ne se soignent pas dans la pharmacie";
	cout << "Pensée du jour : " << penseeDuJour << endl;

	Bateau * monBateauPointe = new Bateau(); // objet instancié dans la heap

	Bateau monBateau; // objet instancié dans la stack
	monBateau.avancer(3,4);

	return 0;
}
