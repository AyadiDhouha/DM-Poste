#include "Lettre.h"
#include<iostream>
using namespace std;

Lettre::Lettre(string org , string dest, int code, float p,float v,int recommandation, enum urgence urg): origine(org),destination(dest),codePostal(code),poids(p),volume(v),tauxRecommandation(recommandation),urgence(urg)
{
	cout<<"construction lettre"<<endl;
}

Lettre::~Lettre()
{
	cout<<"destruction lettre"<<endl;
}

int Lettre::tarifAffranchissement(){

	if (tauxRecommandation== 1)&&(urgence==0)
	return 1;
	else 
	if (tauxRecommandation== 1)&&(urgence==1)
	return 1.8;
	
	if (tauxRecommandation== 2)&&(urgence==0)
	return 2;
	else 
	if (tauxRecommandation== 2)&&(urgence==1)
	return 2.8;
}

int Lettre::tarifRemboursement(){
	if (tauxRecommandation== 0)
	return 0;
	if (tauxRecommandation== 1)
	return 1.5;
	if (tauxRecommandation== 2)
	return 15;	
}

void Lettre::affiche(){
	cout<<"Lettre"<<codePostal<<"/"<<destination<<"/"<<tauxRecommandation<<"/"<<urgence<<endl;
}
