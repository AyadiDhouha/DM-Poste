#ifndef SAC_POSTAL_H
#define SAC_POSTAL_H
#include"Vector.h"

#include "Objet_postal.h"

class Sac_postal : public Objet_postal
{
	public:
		Sac_postal(int);
		Sac_postal(int,float);
		~Sac_postal();
		float calculVolume();
		void ajouter(Objet_postal);
		void supprimer(Objet_postal);
		void afficher();
	protected:
		vector<Objet_postal> sac ;
		float cmax;
		
};

#endif
