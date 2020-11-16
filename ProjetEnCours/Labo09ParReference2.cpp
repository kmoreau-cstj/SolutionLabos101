// But : 
// Auteur : Karine Moreau
// Date : 2020-11-12

#include <iostream>
#include <vector>
#include "Labo06Fonctions.h"
#include "Labo09Fonctions.h"


using namespace std;				// Pour éviter de répéter le std:: devant les instructions comme cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	int valeur1 = 25;
	int valeur2 = 100;


	/*
	cout << "Dans la fonction qui appelle :" <<endl;
	cout << "Valeur 1 : " << valeur1 << endl;
	cout << "Valeur 2 : " << valeur2 << endl;

	cout << "Appel de la fonction faireUnTest : " << endl;
	faireUnTest(valeur1, valeur2);					// On appelle la fonction faireUnTest : utiliser, exécuter
	//faireUnTest(5, 100);							// Le 100 ne fonctionne pas car il n'a pas d'espace en mémoire
												    // On ne peut pas créer une référence sur un espace qui n'existe pas
	//faireUnTest(valeur1 * 2 + 1, valeur2*2+1 );
	//faireUnTest(sqrt(valeur1), sqrt(valeur2));


	cout << "Dans la fonction qui appelle, après l'exécution de faireUnTest :" << endl;
	cout << "Valeur 1 : " << valeur1 << endl;
	cout << "Valeur 2 : " << valeur2 << endl;

	*/

	vector<int> vec{ 12,0,42 }; // , 0, 0, 68, 0, -15, 89, 0, 0, 0, 13, 27, 52, 2, 0, 7, 0, 0 };
	vector<int> vecVide;


	// Afficher le contenu du vecteur avec une fonction
	cout << "Appel de la fonction afficherContenuVecteur : vec : " << endl;
	afficherContenuVecteur(vec);			// appel de la fonction


	// On veut ajouter à la fin du vecteur des valeurs à l'aide d'une fonction
	cout << "Appel de la fonction ajouterValeur :" << endl;
	//ajouterValeurALaFinDuVecteur(vec, 5);



	// 1.	Écrivez une fonction qui saisit les valeurs dans le vecteur (modifie les cases existantes, 
	//      ou ajoute à la fin si plus de place) tant que l’utilisateur n’a pas entré la valeur passée 
	//      en paramètre pour mettre fin à la saisie, par exemple -1.
	saisirValeurDansVecteur(vec, -1);
	cout << "Contenu de vec après l'ajout :" << endl;
	afficherContenuVecteur(vec);

	saisirValeurDansVecteur(vecVide, -999);

	cout << "Contenu de vec après l'ajout :" << endl;
	afficherContenuVecteur(vecVide);



	return 0;
}