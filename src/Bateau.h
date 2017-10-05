/*
 * Bateau.h
 *
 *  Created on: 3 oct. 2017
 *      Author: Mademoiselle
 */

#include <string>
#include <iostream>
using namespace std;

#ifndef BATEAU_H_
#define BATEAU_H_
#include "Capitaine.h"

class Bateau {
protected:

	//Capitaine capitaine; // entraine les copies d'objet
	Capitaine* capitaine;
	string nom;
	float positionX;
	float positionY;

public:
	Bateau();
	virtual ~Bateau();

	void avancer(int deltaX, int deltaY);

	//void attribuerCapitaine(Capitaine capitaine); // copie d'objet - pas tres optimal
	void attribuerCapitaine(Capitaine* capitaine); // passage de pointeur - juste 4 octests

	const string& getNom() const {
		return nom;
	}

	void setNom(const string& nom) {
		this->nom = nom;
	}

	float getPositionX() const {
		return positionX;
	}

	void setPositionX(float positionX) {
		this->positionX = positionX;
	}

	float getPositionY() const {
		return positionY;
	}

	void setPositionY(float positionY) {
		this->positionY = positionY;
	}

};

#endif /* BATEAU_H_ */
