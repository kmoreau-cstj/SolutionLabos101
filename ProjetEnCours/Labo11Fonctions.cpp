#include "Labo11Fonctions.h"

void ouvrirFichierEnLecture(const string NOM_FICHIER, ifstream& canal)
{
	canal.open(NOM_FICHIER, ios::in);

	// On doit tester si l'ouverture a bien fonctionné, sinon afficher des messages d'erreur et quitter le programme
	if (!canal)
	{
		cerr << "Le fichier " << NOM_FICHIER << " n'a pas pu être ouvert correctement. ...." << endl;
		cerr << "Vérifiez ...." << endl;
		cerr << "Ou assurez-vous ...." << endl;
		system("pause");
		exit(123);		// On quitte la fonction, on quitte le main et on quitte le programme	
	}
}

void creerFichierEnEcriture(const string NOM_FICHIER, ofstream& canal)
{
	canal.open(NOM_FICHIER, ios::out);

	// On doit tester si la création a bien fonctionné, sinon afficher des messages d'erreur et quitter le programme
	if (!canal)
	{
		cerr << "Le fichier " << NOM_FICHIER << " n'a pas pu être créé. ...." << endl;
		cerr << "Vérifiez ...." << endl;
		cerr << "Ou assurez-vous ...." << endl;
		system("pause");
		exit(321);		// On quitte la fonction, on quitte le main et on quitte le programme	
	}

}
