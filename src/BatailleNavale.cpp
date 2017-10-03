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
	cout << "!!! Je vous r�pondrai par la bouche de mes canons !!!" << endl; // prints !!! Je vous r�pondrai par la bouche de mes canons !!!
	//cerr << "Voici un message d'erreur";

	int quantite = 0;
	float vitesse = 0.0;

	string penseeDuJour = "Toutes les maladies ne se soignent pas dans la pharmacie";
	cout << "Pens�e du jour : " << penseeDuJour << endl;

	Bateau * monBateauPointe = new Bateau(); // objet instanci� dans la heap

	Bateau monBateau; // objet instanci� dans la stack
	monBateau.avancer(3,4);

	return 0;
}
