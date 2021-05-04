#include "Sac_postal.h"
#incluse<iostream>
using namespace std;



Sac_postal::Sac_postal(int t):sac(t)
{
	cmax=0.5;
	cout<<"construction par defaut"<<endl;
}
Sac_postal::Sac_postal(int t , float m):sac(t),cmax(m)
{
	cout<<"construction sur demande"<<endl;
}

Sac_postal::~Sac_postal()
{
	delete [] sac;
}

float Sac_postal::calculVolume()
{
	float s = 0.0; 
	for (int i = 0; i < sac.size(); i++) {
		
		s =s+ (sac[i]).volume);
	}
	return s; 
}

void Sac_postal::ajouter(Objet_postal obj)
{
	if ((obj.volume +calculVolume() <= max) )
	
		sac.push(obj);
	else
		cout << "sac plein" << endl; 
	
}

void Sac_postal::supprimer(Objet_postal obj)
{
	if sac.search(obj) 
	sac.pop(obj);
	else
	cout<<"objet postal introuvable"<<endl;
}

void Sac_postal::afficher()
{
	for (int i=0;i<sac.size();i++)
	cout<<sac.print()<<endl;
}







