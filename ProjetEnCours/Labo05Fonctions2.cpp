// But : Écrire un programme qui demande à l'utilisateur un nombre. Le programme appelle une fonction pour calculer le carré 
// de ce nombre. Le programme affiche la valeur du carré. Le programme calcule et affiche le cube du nombre demandé 
// en appelant une fonction. Le programme demande un autre entier positif à l'utilisateur et calcule la factorielle 
// du nombre à l'aide d'une fonction et il affiche le résultat à l'écran.
//  5! = 1*2*3*4*5
//  0! = 1
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
#include "Labo05MesFonctions2.h"

using namespace std;				// Pour éviter de répéter le std:: devant les instructions comme cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables
	int nombre;
	double nombreGrand;

	/*cout << "Veuillez entrer un nombre pour calculer son carré :";
	cin >> nombre;

	// Il faut appeler la fonction pour calculer le carré
	cout << "Le carré du nombre " << nombre << " est : " <<  calculerCarre(nombre) << endl;


	// Il faut appeler la fonction pour calculer le cube
	cout << "Le cube du nombre " << nombre << " est : " << calculerCube(nombre) <<endl;

	nombreGrand = nombre;

	// Il faut appeler la fonction pour calculer le cube
	cout << "Le cube du nombre " << nombre << " est : " << calculerCube(nombreGrand) << endl;
	*/

	cout << "Veuillez entrer un entier positif pour calculer la factorielle :";
	cin >> nombre;

	// Avant d'appeller la fonction factorielle, il faut s'assurer que le nombre est bien positif
	nombre = validerNombrePositif(nombre);


	cout << nombre << "! = " << calculerFactorielle(nombre) << endl;


	return 0;
}