#include "Compteur.h"
#include "CompteurRapide.h"
#include "Compteur4Bits.h"
#include "ComteurModulo.h"
#include "ComteurNBits.h"

int main()
{
	Compteur compt1;
	CompteurRapide rapide(&compt1, 4);
	Compteur4Bits compt4;
	CompteurRapide rapide4(&compt4, 6);
	ComteurModulo comptm(5);
	CompteurRapide rapidem(&comptm, 5);
	compt1.incrementer();
	std::cout << compt1.getEtat() << std::endl;
	rapide.incrementer();
	std::cout << rapide.getEtat() << std::endl;
	compt4.incrementer();
	std::cout << compt4.getEtat() << std::endl;
	rapide4.incrementer();
	std::cout << rapide4.getEtat() << std::endl;
	comptm.incrementer();
	std::cout << comptm.getEtat() << std::endl;
	rapidem.incrementer();
	std::cout << rapidem.getEtat() << std::endl;
	
}