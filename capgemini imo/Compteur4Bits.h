#pragma once
#include "Acompteur.h"
class Compteur4Bits : public ACompteur {
	// représente l'état du compteur : 0 =< état < 24
	char etat = 0;
public:
	void incrementer() {
		if (etat == 0xF) etat = 0;
		else etat += 1;
	}
	// retourne l'état courant du compteur
	int getEtat() {
		return etat;
	}
};