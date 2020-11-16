#include "Labo09Fonctions.h"
#include <iostream>
#include "Labo06Fonctions.h"

using namespace std;

void faireUnTest(int paramParCopie, int& paramParReference)
{
	cout << "Dans la fonction : " << endl;
	cout << "Valeur de paramParCopie : " << paramParCopie << endl;
	cout << "Valeur de paramParReference : " << paramParReference << endl;

	// On va modifier les valeurs des deux paramètres
	paramParCopie = paramParCopie * 3;
	paramParReference = paramParReference * 3;

	cout << "Dans la fonction, après modification : " << endl;
	cout << "Valeur de paramParCopie : " << paramParCopie << endl;
	cout << "Valeur de paramParReference : " << paramParReference << endl;
}

void echangerValeur(int& nb1, int& nb2)
{
	// Déclaration des variables
	int change;

	cout << "Dans la fonction : avant d'échanger les valeurs :" << endl;
	cout << "nb1 : " << nb1 << endl;
	cout << "nb2 : " << nb2 << endl;

	change = nb1;
	nb1 = nb2;
	nb2 = change;


	cout << "Dans la fonction : après l'échange des valeurs :" << endl;
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
	for (int i = 0; i < nbElement; i++)			// Pour chaque élément à ajouter
	{
		cout << "Veuillez entrer la valeur :";
		vec.push_back(saisirEntier());
	}
}

void saisirValeurDansVecteur(vector<int>& vec, int quitter)
{
	// déclaration des variables de la fonction
	int valeurAAjouter;
	int nbCaseDispo = vec.size();
	int numeroCaseOuAjouter = 0;

	// Si le vec est vide, on doit faire des push_back

	// Si le vec contient déjà des cases, il faut remplacer le contenu de la case existante avec la fonction at.
	// Mais si on a remplacé toutes les cases exitantes et que l'utilisateur n'a pas mis fin à la saisie avec quitter,
	// il faut ajouter des nouvelles cases avec pusk_back

	// Tant que l'utilisateur n'a pas saisi la valeur quitter
	// On initialise la variable de boucle avant d'entrer dans la boucle
	cout << "Veuillez indiquer la valeur à ajouter ou " << quitter << " pour quitter : ";
	valeurAAjouter = saisirEntier();

	while (valeurAAjouter != quitter)
	{

		// Si le vec a des cases existantes non utilisées : utiliser at
		if (nbCaseDispo > 0)
		{
			vec.at(numeroCaseOuAjouter) = valeurAAjouter;
			// La prochaine case où ajouter : +1
			numeroCaseOuAjouter++;
			nbCaseDispo--;
		}
		// sinon : utiliser push_back
		else
			vec.push_back(valeurAAjouter);
					
		// A la fin de la boucle on doit redemander la nouvelle valeur
		cout << "Veuillez indiquer la valeur à ajouter ou " << quitter << " pour quitter : ";
		valeurAAjouter = saisirEntier();
	}



}
