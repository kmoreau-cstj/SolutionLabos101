#include "Labo11Fonctions.h"

void ouvrirFichierEnLecture(const string NOM_FICHIER, ifstream& canal)
{
	canal.open(NOM_FICHIER, ios::in);

	// On doit tester si l'ouverture a bien fonctionn�, sinon afficher des messages d'erreur et quitter le programme
	if (!canal)
	{
		cerr << "Le fichier " << NOM_FICHIER << " n'a pas pu �tre ouvert correctement. ...." << endl;
		cerr << "V�rifiez ...." << endl;
		cerr << "Ou assurez-vous ...." << endl;
		system("pause");
		exit(123);		// On quitte la fonction, on quitte le main et on quitte le programme	
	}
}

void creerFichierEnEcriture(const string NOM_FICHIER, ofstream& canal)
{
	canal.open(NOM_FICHIER, ios::out);

	// On doit tester si la cr�ation a bien fonctionn�, sinon afficher des messages d'erreur et quitter le programme
	if (!canal)
	{
		cerr << "Le fichier " << NOM_FICHIER << " n'a pas pu �tre cr��. ...." << endl;
		cerr << "V�rifiez ...." << endl;
		cerr << "Ou assurez-vous ...." << endl;
		system("pause");
		exit(321);		// On quitte la fonction, on quitte le main et on quitte le programme	
	}

}
