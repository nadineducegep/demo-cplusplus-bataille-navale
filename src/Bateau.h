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

class Bateau {
protected:

	string nom;
	float positionX;
	float positionY;

public:
	Bateau();
	virtual ~Bateau();

	void avancer(int deltaX, int deltaY);

};

#endif /* BATEAU_H_ */
