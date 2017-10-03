/*
 * Voilier.h
 *
 *  Created on: 3 oct. 2017
 *      Author: Mademoiselle
 */

#ifndef VOILIER_H_
#define VOILIER_H_

#include "Bateau.h"

class Voilier : public Bateau
{
protected:
	int nombreVoiles;
	bool presenceMoteur;
	bool ouvertureVoile;
public:
	Voilier();
	virtual ~Voilier();
};

#endif /* VOILIER_H_ */
