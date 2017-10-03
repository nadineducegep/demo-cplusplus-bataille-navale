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

	int getNombreVoiles() const {
		return nombreVoiles;
	}

	void setNombreVoiles(int nombreVoiles) {
		this->nombreVoiles = nombreVoiles;
	}

	bool isOuvertureVoile() const {
		return ouvertureVoile;
	}

	void setOuvertureVoile(bool ouvertureVoile) {
		this->ouvertureVoile = ouvertureVoile;
	}

	bool isPresenceMoteur() const {
		return presenceMoteur;
	}

	void setPresenceMoteur(bool presenceMoteur) {
		this->presenceMoteur = presenceMoteur;
	}
};

#endif /* VOILIER_H_ */
