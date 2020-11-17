#include "Labo09Fonctions.h"
#include <iostream>
#include "Labo06Fonctions.h"

using namespace std;

void faireUnTest(int paramParCopie, int& paramParReference)
{
	cout << "Dans la fonction : " << endl;
	cout << "Valeur de paramParCopie : " << paramParCopie << endl;
	cout << "Valeur de paramParReference : " << paramParReference << endl;

	// On va modifier les valeurs des deux param�tres
	paramParCopie = paramParCopie * 3;
	paramParReference = paramParReference * 3;

	cout << "Dans la fonction, apr�s modification : " << endl;
	cout << "Valeur de paramParCopie : " << paramParCopie << endl;
	cout << "Valeur de paramParReference : " << paramParReference << endl;
}

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

void saisirValeurDansVecteur(vector<int>& vec, int quitter)
{
	// d�claration des variables de la fonction
	int valeurAAjouter;
	int nbCaseDispo = vec.size();
	int numeroCaseOuAjouter = 0;

	// Si le vec est vide, on doit faire des push_back

	// Si le vec contient d�j� des cases, il faut remplacer le contenu de la case existante avec la fonction at.
	// Mais si on a remplac� toutes les cases exitantes et que l'utilisateur n'a pas mis fin � la saisie avec quitter,
	// il faut ajouter des nouvelles cases avec pusk_back

	// Tant que l'utilisateur n'a pas saisi la valeur quitter
	// On initialise la variable de boucle avant d'entrer dans la boucle
	cout << "Veuillez indiquer la valeur � ajouter ou " << quitter << " pour quitter : ";
	valeurAAjouter = saisirEntier();

	while (valeurAAjouter != quitter)
	{

		// Si le vec a des cases existantes non utilis�es : utiliser at
		if (nbCaseDispo > 0)
		{
			vec.at(numeroCaseOuAjouter) = valeurAAjouter;
			// La prochaine case o� ajouter : +1
			numeroCaseOuAjouter++;
			nbCaseDispo--;
		}
		// sinon : utiliser push_back
		else
			vec.push_back(valeurAAjouter);
					
		// A la fin de la boucle on doit redemander la nouvelle valeur
		cout << "Veuillez indiquer la valeur � ajouter ou " << quitter << " pour quitter : ";
		valeurAAjouter = saisirEntier();
	}



}

int calculerSommeVecteur(vector<int> vec)
{
	// D�claration des variables
	// Information fournies par l'utilisateur : rien puisque les donn�es proviennent directement du param�tre vec
	// R�sultat � obtenir
	int somme=0;					// Au d�part, la somme vaut 0, car on a additionn� aucun nombre


	// Il faut parcourir toutes les cases du vecteur. Elles sont num�rot�es de 0 � size()-1
	// Ici i repr�sente le num�ro de la case, la cellule, de l'�l�ment du vecteur
	for (int numeroCase	 = 0; numeroCase < vec.size(); numeroCase++)
	{
		somme = somme + vec.at(numeroCase);			// vec.at(numeroCase) permet d'aller chercher le contenu de la case
	}
	return somme;

}

float calculerMoyenneVecteur(const vector<int>& vec)
{
	// D�claration des variables
	float resultat;
	/*
	for (int i = 0; i < vec.size(); i++)
	{
		somme = somme + vec.at(i);
	}
	*/

	// ATTENTION : la division par z�ro est une erreur. Il faut s'assurer que le vecteur n'est pas vide
	if (vec.empty())
	{
		cerr << "Erreur : La division par z�ro est impossible." << endl;
		system("pause");
		return -99999999.99;
	}
	else
	{
		resultat = (float)calculerSommeVecteur(vec) / vec.size();  // int / int = int => 
		// il faut changer le type d'un des deux op�randes en float => on caste en mettant entre parenth�se
		// le type voulant avant la variable
		return resultat;
	}
}

bool trouverIntDansVec(int nombre, vector<int> vec)
{
	// D�claration des variables
	// Pour le r�sultat : et on consid�re qu'on ne trouvera pas la valeur
	// bool result = false;
	// On parcourt le vecteur � la recherche d'une valeur correspondant � nombre
	for (int i = 0; i < vec.size(); i++) 
	{
		if (nombre == vec.at(i)) 
		{
			//result = true;
			// On a trouv� une valeur correspondante, on retourne vrai et on quitte la boucle et la fonction
			return true;
		}
	}
	// Si on est ici, apr�s la boucle, c'Est qu'on a rien trouv�, on retourne faux
	return false;
}

int calculerFrequenceDansVecteur(vector<int> vec, int nombre)
{
	int nbFois = 0;
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec.at(i) == nombre)
			nbFois++;
	}
	return nbFois;
}
