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

	int valeur1 = 25;
	int valeur2 = 100;


	/*
	cout << "Dans la fonction qui appelle :" <<endl;
	cout << "Valeur 1 : " << valeur1 << endl;
	cout << "Valeur 2 : " << valeur2 << endl;

	cout << "Appel de la fonction faireUnTest : " << endl;
	faireUnTest(valeur1, valeur2);					// On appelle la fonction faireUnTest : utiliser, ex�cuter
	//faireUnTest(5, 100);							// Le 100 ne fonctionne pas car il n'a pas d'espace en m�moire
												    // On ne peut pas cr�er une r�f�rence sur un espace qui n'existe pas
	//faireUnTest(valeur1 * 2 + 1, valeur2*2+1 );
	//faireUnTest(sqrt(valeur1), sqrt(valeur2));


	cout << "Dans la fonction qui appelle, apr�s l'ex�cution de faireUnTest :" << endl;
	cout << "Valeur 1 : " << valeur1 << endl;
	cout << "Valeur 2 : " << valeur2 << endl;

	*/

	vector<int> vec{ 12,0,42, 0, 0, 68, 0, -15, 89, 0, 0, 0, 13, 27, 52, 2, 0, 7, 0, 0 };
	vector<int> vecVide;


	// Afficher le contenu du vecteur avec une fonction
	cout << "Appel de la fonction afficherContenuVecteur : vec : " << endl;
	afficherContenuVecteur(vec);			// appel de la fonction


	// On veut ajouter � la fin du vecteur des valeurs � l'aide d'une fonction
	cout << "Appel de la fonction ajouterValeur :" << endl;
	//ajouterValeurALaFinDuVecteur(vec, 5);



	// 1.	�crivez une fonction qui saisit les valeurs dans le vecteur (modifie les cases existantes, 
	//      ou ajoute � la fin si plus de place) tant que l�utilisateur n�a pas entr� la valeur pass�e 
	//      en param�tre pour mettre fin � la saisie, par exemple -1.
	/*saisirValeurDansVecteur(vec, -1);
	cout << "Contenu de vec apr�s l'ajout :" << endl;
	afficherContenuVecteur(vec);

	saisirValeurDansVecteur(vecVide, -999);

	cout << "Contenu de vec apr�s l'ajout :" << endl;
	afficherContenuVecteur(vecVide);
	*/

	//2. �crivez une fonction qui retourne la somme des �l�ments du vecteur.
	cout << "La somme des �l�ments du vecteur vec est  : " << calculerSommeVecteur(vec) << endl;
	cout << "La somme des �l�ments du vecteur vecVide est  : " << calculerSommeVecteur(vecVide) << endl;

	// 3. �crivez une fonction qui calcule la moyenne des �l�ments du vecteur.
	cout << "La moyenne des �l�ments du vecteur vecVide est  : " << calculerMoyenneVecteur(vecVide) << endl;
	cout << "La moyenne des �l�ments du vecteur vec est  : " << calculerMoyenneVecteur(vec) << endl;

	// 4.�crivez une fonction qui indique si une valeur est dans le vecteur.
	// Cette fonction retourne vrai si la valeur est trouv�e et faux dans le cas contraire.
	int nombre;

	cout << "Veuillez indiquer le nombre � rechercher dans le vecteur : ";
	nombre = saisirEntier();
	
	if (trouverIntDansVec(nombre, vec))
	{
		cout << "le nombre est present dans le vecteur vec" << endl;
	}
	else
	{
		cout << "le nombre ne se trouve pas dans le vecteur vec"<<endl;
	}

	if (trouverIntDansVec(nombre, vecVide))
	{
		cout << "le nombre est present dans le vecteur vecVide" << endl;
	}
	else
	{
		cout << "le nombre ne se trouve pas dans le vecteur vecVide" <<endl;
	}


	// 5. �crivez une fonction qui indique la fr�quence d�une valeur dans le vecteur.
	//    Cette fonction compte le nombre de fois que la valeur pass�e en param�tre apparait dans le vecteur 
	//    et retourne la fr�quence.
	cout << nombre << " se retrouve " << calculerFrequenceDansVecteur(vec, nombre) << " fois dans le vecteur." << endl;

	cout << nombre << " se retrouve " << calculerFrequenceDansVecteur(vecVide, nombre) << " fois dans le vecteur." << endl;



	return 0;
}