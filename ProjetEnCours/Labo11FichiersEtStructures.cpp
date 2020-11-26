// But : Programmer la fonctionnalité de générer une table des matières à la Word !!!!
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
#include <fstream>			// Bibliothèque qui fournit les fonctions pour utiliser les fichiers dans un programme (open, >>, <<, getline, ...)
#include "Labo11Fonctions.h"

using namespace std;				// Pour éviter de répéter le std:: devant les instructions comme cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des constantes
	const string FICHIER_DONNEES = "DonneesDesTitres.txt";
	const string FICHIER_RESULTAT = "TDM.txt";
	const string TITRE = "Table des matières";
	const string TYPE_SECTION = "Chapitre";
	const char SEPARATEUR_SECTION = ':';
	const char POINTE_DE_SUITE = '.';


	// Déclaration des variables
	// 0. Si le programme doit accéder au disque dur, cela prend un canal pour chaque fichier
	ifstream canalIn;		// Le canal d'entrée ou de input ou de lecture : qui est l'équivalent du cin >>
	ofstream canalOut;		// Le canal de sortie ou output ou en écriture : qui est l'équivalent de cout <<
	// 1. On doit créer des variables pour chaque information que l'utilisateur tape au clavier ou celles fournies par le fichier d'entrée
	//string nomChapitre;
	//int numeroPage;
	section laSectionCourante;
	// 2. Les variables pour calculer ou afficher le résultat doivent généralement être initialisées au début du programme
	int numeroSection = 1;			// Au départ, on commence par afficher le premier chapitre donc on met 1
	// 3. Les variables intermédiaires ???

	// On est prêt à programmer la solution
	// On doit ouvrir les canaux vers les fichiers sources ou destination à l'aide de fonction
	ouvrirFichierEnLecture(FICHIER_DONNEES, canalIn);		// Appel de la fonction pour s'assurer que le canal sera bien ouvert
	creerFichierEnEcriture(FICHIER_RESULTAT, canalOut);


	// On TENTE de lire le premier enregistrement dans le fichier d'entrée à l'aide d'une fonction
	lireEnregistrement(canalIn, laSectionCourante);
	laSectionCourante = lireEnregistrement(canalIn);




	return 0;
}