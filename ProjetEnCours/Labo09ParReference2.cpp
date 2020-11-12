// But : 
// Auteur : Karine Moreau
// Date : 2020-11-12

#include <iostream>
#include <vector>
#include "Labo06Fonctions.h"
#include "Labo09Fonctions.h"


using namespace std;				// Pour �viter de r�p�ter le std:: devant les instructions comme cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	vector<int> vec{ 12,0,42,0,0,68,0,-15,89,0,0,0,13,27,52,2,0,7,0,0 };


	// Afficher le contenu du vecteur avec une fonction
	cout << "Appel de la fonction afficherContenuVecteur : vec : " << endl;
	afficherContenuVecteur(vec);			// appel de la fonction


	// On veut ajouter � la fin du vecteur des valeurs � l'aide d'une fonction
	cout << "Appel de la fonction ajouterValeur :" << endl;
	ajouterValeurALaFinDuVecteur(vec, 5);

	cout << "Contenu de vec apr�s l'ajout :" << endl;
	afficherContenuVecteur(vec);

	return 0;
}