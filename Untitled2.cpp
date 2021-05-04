#include "Objet_postal.h"
#include "Lettre.h"
#include"Colis.h"
#include "Vector.h"
#include"Sac_postal.h"
#include<iostream>
#include<string>
using namespace std;
int main(){
	Sac_postal psac;
	Lettre pl1,pl2;
	Colis pc1,pc2;
	psac.ajouter(pl1);
	psac.ajouter(pl2);
	psac.ajouter(pc1);
	psac.ajouter(pc2);
	psac.afficher();
	
	
	return 0;
}
