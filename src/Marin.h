/*
 * Marin.h
 *
 *  Created on: 5 oct. 2017
 *      Author: Mademoiselle
 */

#ifndef MARIN_H_
#define MARIN_H_
#include <string>
using namespace std;

class Marin {
protected:
	string nom;
public:
	Marin();
	virtual ~Marin();

	const string& getNom() const {
		return nom;
	}

	void setNom(const string& nom) {
		this->nom = nom;
	}
};

#endif /* MARIN_H_ */
