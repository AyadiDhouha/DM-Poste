#include "Colis.h"
#include <iostream>
using namespace std;

Colis::Colis(string org , string dest,int code, float p,float v,int recommandation,string decl,int val ):origine(org),destination(dest),codePostal(code),poids(p),volume(v),tauxRecommandation(recommandation),
declarationContenu(decl),valeur(val)
{
	cout<<"construction colis"<<endl;
}

Colis::~Colis()
{
	cout<<"destruction colis"<<endl;
}

int Colis::tarifAffranchissement(){
	if (tauxRecommandation== 1)&&(volume<0.125)
	return 2.5;
	else 
	if (tauxRecommandation== 1)&&(volume>0.125)
	return 5.5;
	
	if (tauxRecommandation== 2)&&(volume<0.125)
	return 3.5;
	else 
	if (tauxRecommandation== 2)&&(volume>0.125)
	return 6.5;
}

int Colis::tarifRemboursement(){
	if (tauxRecommandation==1)
	return 0.1*valeur;
	else
	if(tauxRecommandation==2)
	return 0.5*valeur;
	else 
	return 0;
	
}

void Colis::affiche(){
	cout<<"Colis"<<codePostal<<"/"<<destination<<"/"<<tauxRecommandation<<"/"<<volume<<"/"<<valeur<<endl;
}
