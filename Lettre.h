#ifndef LETTRE_H
#define LETTRE_H
#include<string>

#include "Objet_postal.h"

class Lettre : public  Objet_postal
{
	public:
		Lettre(string,string,int,float,float,int,enum urgence);
		~Lettre();
		int tarifAffranchissement ();
		int tarifRemboursement();
		void affiche();
		protected:
		enum urgence { ordinaire , urgent };
};

#endif
