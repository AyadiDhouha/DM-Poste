#include "Objet_postal.h"
#include<iostream>
using namespace std;

Objet_postal::Objet_postal(Objet_postal &obj)
{
	origine=obj.origine;
	destination=obj.destination;
	codePostal=obj.codePostal;
	poids=obj.poids;
	volume=obj.volume;
	tauxRecommandation=obj.tauxRecommandation;
}



Objet_postal::Objet_postal(string org , string dest,int code, float p,float v,int recommandation): origine(org),destination(dest),codePostal(code),poids(p),volume(v),tauxRecommandation(recommandation)
{
	cout<<"construction objet postal"<<endl;
}

Objet_postal::~Objet_postal()
{
	cout<<"destruction objet postal"<<endl;
}

