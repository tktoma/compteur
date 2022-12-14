#pragma once
#include "Acompteur.h"
class CompteurRapide
{
	// compteur lent que l'on souhaite incr�menter plus rapidement
	ACompteur* compteur; // d�sormais de type ACompteur
	// vitesse d'incr�mentation
	int vitesse;
public:
	// constructeur
	// param compteur est un ACompteur
	CompteurRapide(ACompteur* compteur, int vitesse)
	{
		this->compteur = compteur;
		this->vitesse = vitesse;
	}
	// retourne l'�tat du compteur lent
	int getEtat()
	{
		// aucun traitement particulier n'est utile, il suffit de d�l�guer � l'attribut compteur
		return compteur->getEtat();
	}
	// incr�mente vitesse fois le compteur lent
	void incrementer()
	{
		// r�p�te vitesse fois
		for (int i = 0; i < vitesse; i++)
		{
			// incr�mente le compteur lent
			compteur->incrementer();
		}
	}
};