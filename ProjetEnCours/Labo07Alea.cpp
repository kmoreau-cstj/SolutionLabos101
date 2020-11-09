// But : le programme génère et affiche un nombre aléatoire compris entre un min et un max
// Auteur : Karine Moreau
// Date : 2020-11-09

#include <iostream>
#include <ctime>
#include "Labo07Fonctions.h"

using namespace std;				// Pour éviter de répéter le std:: devant les instructions comme cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables

	int alea;

	srand(time(NULL));			// On choisit volontairement la première ligne des 32768 nombres pas classés par ordre croissant
								// s pour seed : graine, un nombre entier positif pour déterminer le numéro de la ligne des 32768
								// nombres déjà enregistrés mélangés

	// srand doit être appelée une seule fois au début du programme qui va utiliser l'aléatoire

	alea = rand();		// Rand() fonction pour obtenir un nombre aléatoire en C++.  rand pour random

	cout << "Voici un nombre aléatoire : " << alea << endl;

	// On affiche 10 autres nombres aléatoires
	for (int i = 0; i < 10; i++)
	{
		cout << "Alea#" << i + 1 << " : " << rand() << endl;
	}


	// on voudrait simuler le lancé d'un dé et obtenir des nombres compris entre 1 et 6
	for (int i = 0; i < 20; i++)
	{
		cout << "lancé# " << i + 1 << " : " << rand()%6 + 1 << endl;
		// %2 => 0 ou 1
		// %3 => 0 ou 1 ou 2
		// %4 => 0 ou 1 ou 2 ou 3
		// %n => 0 à (n-1)
		// %6 => 0 et 5

	}

	// On voudrait jouer au monopoly : deux dés : 2 à 12
	for (int i = 0; i < 20; i++)
	{
		//cout << "Somme des deux dés : " << rand()%11 + 2 << endl;
		cout << "Somme des deux dés : " << genererAlea(2, 12) << endl;
		// rand%11 : 0 à 10
		// +2 :      2 à 12
	}

	// on voudrait générer un nombre entre 10 et 20
	for (int i = 0; i < 20; i++)
	{
		//cout << "alea de 10 à 20 : " << rand() % 11 + 10 << endl;
		cout << "alea de 10 à 20 : " << genererAlea(10,20) << endl;
		// rand%11 : 0 à 10
		// +10 :    10 à 20
	}
	// on voudrait générer un nombre entre 5 et 20
	for (int i = 0; i < 20; i++)
	{
		//cout << "alea de 5 à 20 : " << rand() % 16 + 5 << endl;
		cout << "alea de 5 à 20 : " << genererAlea(5,20) << endl;
		// rand%16 : 0 à 15
		// +5 :      5 à 20
	}

	cout << genererAlea(2, 12) << endl;



	cout << "Le max de rand : " << RAND_MAX << endl;

	return 0;
}