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

void lireEnregistrement(ifstream& canal, section& sectionALire)
{
	//Introduction au C++;1
	// On doit lire une chaine de caractères qui contient des espaces ==> getline !!!
	// getline exige 3 paramètres : le canal, la chaine de caractères et le délimitateur
	// Attention, la chaine de caractères se trouve dans l'enveloppe(structure). Il faut mettre un point pour accéder aux champs
	// qui se trouvent à l'intérieur
	getline(canal, sectionALire.nomChapitre, ';');
	// On doit maintenant lire le numéro de la page qui est un int. On ne peut pas utiliser getline car ce n'est pas une chaine
	// de caractères ==> >>
	canal >> sectionALire.numeroPage;
	// On constate que les >> laissent le délimitateur (espace, \n, \t) après leur lecture, il faut les ignorer
	canal.ignore(1, '\n');
}

section lireEnregistrement(ifstream& canal)
{
	// Déclaration des variables
	section sectionALire;

	//Introduction au C++;1
	getline(canal, sectionALire.nomChapitre, ';');
	canal >> sectionALire.numeroPage;
	canal.ignore(1, '\n');

	return sectionALire;
}

void ecrireEnTete(ofstream& canal, const string TITRE, int nbLigneApresTitre)
{
	//                                    Table des matières                                    
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
