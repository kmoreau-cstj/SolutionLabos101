// But : �crire un programme qui demande � l'utilisateur un nombre. Le programme appelle une fonction pour calculer le carr� 
// de ce nombre. Le programme affiche la valeur du carr�. Le programme calcule et affiche le cube du nombre demand� 
// en appelant une fonction.
// 
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
#include "Labo05MesFonctions2.h"

using namespace std;				// Pour �viter de r�p�ter le std:: devant les instructions comme cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables
	int nombre;
	double nombreGrand;

	cout << "Veuillez entrer un nombre pour calculer son carr� :";
	cin >> nombre;

	// Il faut appeler la fonction pour calculer le carr�
	cout << "Le carr� du nombre " << nombre << " est : " <<  calculerCarre(nombre) << endl;


	// Il faut appeler la fonction pour calculer le cube
	cout << "Le cube du nombre " << nombre << " est : " << calculerCube(nombre) <<endl;

	nombreGrand = nombre;

	// Il faut appeler la fonction pour calculer le cube
	cout << "Le cube du nombre " << nombre << " est : " << calculerCube(nombreGrand) << endl;

	return 0;
}