#include "Labo09Fonctions.h"
#include <iostream>
#include "Labo06Fonctions.h"

using namespace std;

void echangerValeur(int& nb1, int& nb2)
{
	// D�claration des variables
	int change;

	cout << "Dans la fonction : avant d'�changer les valeurs :" << endl;
	cout << "nb1 : " << nb1 << endl;
	cout << "nb2 : " << nb2 << endl;

	change = nb1;
	nb1 = nb2;
	nb2 = change;


	cout << "Dans la fonction : apr�s l'�change des valeurs :" << endl;
	cout << "nb1 : " << nb1 << endl;
	cout << "nb2 : " << nb2 << endl;

}

void afficherContenuVecteur(vector<int> vec)
{
	for (int i = 0; i < vec.size(); i++)
	{
		cout << "vec[" << i << "]=" << vec.at(i) << endl;
	}
}

void ajouterValeurALaFinDuVecteur(vector<int>& vec, int nbElement)
{
	for (int i = 0; i < nbElement; i++)			// Pour chaque �l�ment � ajouter
	{
		cout << "Veuillez entrer la valeur :";
		vec.push_back(saisirEntier());
	}
}
