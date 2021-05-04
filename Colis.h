#ifndef COLIS_H
#define COLIS_H
#include<string>

#include "Objet_postal.h"

class Colis : public Objet_postal
{
	public:
		Colis(string,string,int,float,float,int,string,int);
		~Colis();
		int tarifAffranchissement ();
		int tarifRemboursement();
		void affiche();
	protected:
		string declarationContenu;
		int valeur;
		
};

#endif
