// But : Demander � l'utilisateur un nombre compris entre 5 et 20. Le programme s'assure que le nombre est valide,
// sinon il le redemande � l'utilisateur
// Le programme affiche le carr� suivant selon le nombre entr� par l'utilisateur : Exemple 8

/*

* * * * * * * *				8 �toiles
 * * * * * * *				1 espace suivi de 7 �toiles
* * * * * * * *
 * * * * * * *
* * * * * * * *
 * * * * * * *
* * * * * * * *
 * * * * * * *


 Votre programme ne peut utiliser que trois instructions de sortie :
cout << "* ";
cout << ' ';
cout << endl;

*/

// Auteur : Karine Moreau
// Date : 2020-10-05

#include <iostream>

using namespace std;				// Pour �viter de r�p�ter le std:: devant les instructions comme cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// D�claration des constantes
	const int MIN = 5;
	const int MAX = 20;
	
	// D�claration des variables
	int nbEtoiles;

	// Demander � l'utilisateur un nombre compris entre 5 et 20
	cout << "Veuillez entrer un nombre compris entre " << MIN << " et " << MAX << " : ";
	cin >> nbEtoiles;


	// Le programme valide que le nombre est bien compris entre 5 et 20
	while (!(nbEtoiles >=MIN && nbEtoiles <= MAX))
	{
		cout << "Erreur : le nombre n'est ..." << endl;

		// Demander � l'utilisateur un nombre compris entre 5 et 20
		cout << "Veuillez entrer un nombre compris entre " << MIN << " et " << MAX << " : ";
		cin >> nbEtoiles;

	}


	// Ici le nombre est bien compris entre 5 et 20
	// Le programme dessine la forme en alternant �toile et espace au d�but de la ligne
	for (int ligne = 0; ligne < nbEtoiles; ligne++)				// Pour compter les lignes jusqu`� nombre
	{
		// On doit alterner entre * et un espace ou un seul espace
		if (ligne % 2 == 0)
		{
			cout << "* ";
		}
		else
		{
			cout << ' ';
		}
		
		// Pour chaque ligne, il faut dessiner nombre-1 d'�toiles
		for (int etoile = 0; etoile < nbEtoiles-1; etoile++)
		{
			cout << "* ";
		}

		// Il faut changer de ligne
		cout << endl;
	}




	return 0;
}