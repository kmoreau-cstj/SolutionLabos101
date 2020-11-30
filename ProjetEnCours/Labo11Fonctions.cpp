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

void lireEnregistrement(ifstream& canal, section& sectionALire)
{
	//Introduction au C++;1
	// On doit lire une chaine de caract�res qui contient des espaces ==> getline !!!
	// getline exige 3 param�tres : le canal, la chaine de caract�res et le d�limitateur
	// Attention, la chaine de caract�res se trouve dans l'enveloppe(structure). Il faut mettre un point pour acc�der aux champs
	// qui se trouvent � l'int�rieur
	getline(canal, sectionALire.nomChapitre, ';');
	// On doit maintenant lire le num�ro de la page qui est un int. On ne peut pas utiliser getline car ce n'est pas une chaine
	// de caract�res ==> >>
	canal >> sectionALire.numeroPage;
	// On constate que les >> laissent le d�limitateur (espace, \n, \t) apr�s leur lecture, il faut les ignorer
	canal.ignore(1, '\n');
}

section lireEnregistrement(ifstream& canal)
{
	// D�claration des variables
	section sectionALire;

	//Introduction au C++;1
	getline(canal, sectionALire.nomChapitre, ';');
	canal >> sectionALire.numeroPage;
	canal.ignore(1, '\n');

	return sectionALire;
}

void ecrireEnTete(ofstream& canal, const string TITRE, int nbLigneApresTitre)
{
	//                                    Table des mati�res                                    
	// Il faut centrer le titre dans la page qui fait quelle longueur ????
	canal << setw((LARGEUR_PAGE - TITRE.length()) / 2) << " " << TITRE << endl;
	for (int i = 0; i < nbLigneApresTitre; i++)
	{
		canal << endl;
	}

}

void ecrireEnregistrement(ofstream& canal, section sectionAEcrire, int numeroChapitre)
{
	//Chapitre 1  : Introduction au C++.................................................1


}
