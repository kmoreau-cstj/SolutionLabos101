// But : Demander à l'utilisateur un nombre entier et vérifier qu'il se trouve bien entre 1 et 10.
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
#include <string>					// Bibliothèque offrant les fonctions spécifiques aux string : getline

#include "Labo06Fonctions.h"

using namespace std;				// Pour éviter de répéter le std:: devant les instructions comme cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");			// pour passer de Windows à DOS(console) car pas la même table ascii

	// Déclaration des constantes
	const int MIN = 1;
	const int MAX = 10;

	// Déclaration des variables
	string clavier;			// Cette variable permet de lire le contenu de la mémoire du clavier et surtout de vider
							// tout le contenu de la mémoire après la lecture
	int nombre;
	char symbole;

	cout << "Veuillez entrer un nombre entier : ";
	// cin >> nombre;
	nombre = saisirEntier();

	while (nombre < MIN || nombre > MAX)
	{
		cout << "Erreur : Le nombre doit être compris entre " << MIN << " et " << MAX << "." << endl;
		cout << "Veuillez entrer un nombre entier : ";
		//cin >> nombre;
		nombre = saisirEntier();
	}

	cout << "votre nombre est : " << nombre << endl;

	cout << "Entrez un caractère :";
	symbole = saisirCaractere();
	cout << "Votre caractère est  : " << symbole << endl;

	return 0;
}