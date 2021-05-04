#ifndef OBJET_POSTAL_H
#define OBJET_POSTAL_H
#include <string>

class Objet_postal
{

	protected:
		string origine, destination ;
		int codePostal,tauxRecommandation;
		float volume,poids;
	public:
		Objet_postal(const Objet_postal &obj);s
  	   	Objet_postal(string,string,int,float,float,int);
		~Objet_postal();
		
};

#endif
