/*
 * Bateau.cpp
 *
 *  Created on: 3 oct. 2017
 *      Author: Mademoiselle
 */

#include "Bateau.h"

Bateau::Bateau()
{
	this->positionX = 0;
	this->positionY = 0;
}

Bateau::~Bateau()
{
}

// Version avec copie d'objet
//void Bateau::attribuerCapitaine(Capitaine capitaine)
//{
//	this->capitaine = capitaine; // copie d'objet
//	cout << "Nouveau capitaine pour Bateau " << this->nom << " : " << this->capitaine.getNom() << endl;
//}

void Bateau::attribuerCapitaine(Capitaine* capitaine)
{
	this->capitaine = capitaine;
	cout << "Nouveau capitaine pour Bateau " << this->nom << " : " << (*this->capitaine).getNom() << endl;
}


void Bateau::avancer(int deltaX, int deltaY)
{
	this->positionX += deltaX;
	this->positionY += deltaY;
	//(*this).positionX
	cout << "Position x = " << this->positionX << endl;
	cout << "Position y = " << this->positionY << endl;


}

