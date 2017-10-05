//============================================================================
// Name        : BatailleNavale.cpp
// Author      : Nadine Giasson St-Amand
// Version     :
// Copyright   : (c) LudiJeu
// Description : Une bataille navale pour tester des classes bateau
//============================================================================

#include <iostream>
#include "Bateau.h"
#include "Voilier.h"
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
	cout << "Mon bateau est rendu a (" << monBateau.getPositionX() << "," << monBateau.getPositionY() << ")" << endl;

	Voilier aTouteVoile;
	aTouteVoile.avancer(2,3);
	cout << "Mon Voilier est rendu a (" << aTouteVoile.getPositionX() << "," << aTouteVoile.getPositionY() << ")" << endl;

	// Faire des tableaux d'objets - non recommande
	Bateau quai[5];
	quai[0] = monBateau;
	quai[1] = aTouteVoile; // cast implicite // mauvais

	// Faire des tableaux de pointeurs - methode recommandee
	Bateau* marina[5]; // Bateau* type pointeur
	marina[0] = &monBateau; // Operateur & en tant que preneur d'adresse de variable
	marina[1] = &aTouteVoile; // l'objet conserve son type, sa taille

	Capitaine capitaineNadine;
	capitaineNadine.setNom("Nadine");
	//aTouteVoile.attribuerCapitaine(capitaineNadine); // copie d'objet
	aTouteVoile.attribuerCapitaine(new Capitaine()); // passage de pointeur d'objet anonyme
	aTouteVoile.attribuerCapitaine(&capitaineNadine); // passage de pointeur d'objet nomm�




	return 0;
}
