// But : Demander à l'utilisateur deux valeurs entières et les stocker dans valeur1 et dans valeur2. Le programme appelle
// une fonction qui permet d'échanger les deux valeurs : La valeur contenue dans valeur1 se retrouve dans valeur2. 
// La valeur contenue dans valeur2 se retrouve dans valeur1. Le programme affiche les valeurs contenues dans valeur1 et valeur2
// Auteur : Karine Moreau
// Date : 2020-11-12

#include <iostream>
#include "Labo06Fonctions.h"
#include "Labo09Fonctions.h"


using namespace std;				// Pour éviter de répéter le std:: devant les instructions comme cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables
	int valeur1;
	int valeur2;

	cout << "Veuillez entrer la valeur 1 :";
	//cin >> valeur1;
	valeur1 = saisirEntier();

	cout << "Veuillez entrer la valeur 2 :";
	valeur2 = saisirEntier();

	cout << "Avant d'appeler la fonction echangerValeur :" << endl;
	cout << "Valeur1 : " << valeur1 << endl;
	cout << "Valeur2 : " << valeur2 << endl;

	cout << "Appel de la fonction echangerValeur :" << endl;
	echangerValeur(valeur1, valeur2);			// Appel de la fonction pour l'exécuter

	cout << "Après avoir appelé la fonction echangerValeur :" << endl;
	cout << "Valeur1 : " << valeur1 << endl;
	cout << "Valeur2 : " << valeur2 << endl;



	return 0;
}