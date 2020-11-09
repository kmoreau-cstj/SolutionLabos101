// But : le programme g�n�re et affiche un nombre al�atoire compris entre un min et un max
// Auteur : Karine Moreau
// Date : 2020-11-09

#include <iostream>
#include <ctime>
#include "Labo07Fonctions.h"

using namespace std;				// Pour �viter de r�p�ter le std:: devant les instructions comme cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables

	int alea;

	srand(time(NULL));			// On choisit volontairement la premi�re ligne des 32768 nombres pas class�s par ordre croissant
								// s pour seed : graine, un nombre entier positif pour d�terminer le num�ro de la ligne des 32768
								// nombres d�j� enregistr�s m�lang�s

	// srand doit �tre appel�e une seule fois au d�but du programme qui va utiliser l'al�atoire

	alea = rand();		// Rand() fonction pour obtenir un nombre al�atoire en C++.  rand pour random

	cout << "Voici un nombre al�atoire : " << alea << endl;

	// On affiche 10 autres nombres al�atoires
	for (int i = 0; i < 10; i++)
	{
		cout << "Alea#" << i + 1 << " : " << rand() << endl;
	}


	// on voudrait simuler le lanc� d'un d� et obtenir des nombres compris entre 1 et 6
	for (int i = 0; i < 20; i++)
	{
		cout << "lanc�# " << i + 1 << " : " << rand()%6 + 1 << endl;
		// %2 => 0 ou 1
		// %3 => 0 ou 1 ou 2
		// %4 => 0 ou 1 ou 2 ou 3
		// %n => 0 � (n-1)
		// %6 => 0 et 5

	}

	// On voudrait jouer au monopoly : deux d�s : 2 � 12
	for (int i = 0; i < 20; i++)
	{
		//cout << "Somme des deux d�s : " << rand()%11 + 2 << endl;
		cout << "Somme des deux d�s : " << genererAlea(2, 12) << endl;
		// rand%11 : 0 � 10
		// +2 :      2 � 12
	}

	// on voudrait g�n�rer un nombre entre 10 et 20
	for (int i = 0; i < 20; i++)
	{
		//cout << "alea de 10 � 20 : " << rand() % 11 + 10 << endl;
		cout << "alea de 10 � 20 : " << genererAlea(10,20) << endl;
		// rand%11 : 0 � 10
		// +10 :    10 � 20
	}
	// on voudrait g�n�rer un nombre entre 5 et 20
	for (int i = 0; i < 20; i++)
	{
		//cout << "alea de 5 � 20 : " << rand() % 16 + 5 << endl;
		cout << "alea de 5 � 20 : " << genererAlea(5,20) << endl;
		// rand%16 : 0 � 15
		// +5 :      5 � 20
	}

	cout << genererAlea(2, 12) << endl;



	cout << "Le max de rand : " << RAND_MAX << endl;

	return 0;
}