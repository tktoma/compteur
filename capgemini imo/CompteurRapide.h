#pragma once
#include "Acompteur.h"
class CompteurRapide
{
	// compteur lent que l'on souhaite incrémenter plus rapidement
	ACompteur* compteur; // désormais de type ACompteur
	// vitesse d'incrémentation
	int vitesse;
public:
	// constructeur
	// param compteur est un ACompteur
	CompteurRapide(ACompteur* compteur, int vitesse)
	{
		this->compteur = compteur;
		this->vitesse = vitesse;
	}
	// retourne l'état du compteur lent
	int getEtat()
	{
		// aucun traitement particulier n'est utile, il suffit de déléguer à l'attribut compteur
		return compteur->getEtat();
	}
	// incrémente vitesse fois le compteur lent
	void incrementer()
	{
		// répète vitesse fois
		for (int i = 0; i < vitesse; i++)
		{
			// incrémente le compteur lent
			compteur->incrementer();
		}
	}
};