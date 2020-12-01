// But : Programmer la fonctionnalit� de g�n�rer une table des mati�res � la Word !!!!
// Auteur : Karine Moreau
// Date : 2020

//#include <iostream>
//#include <fstream>			// Biblioth�que qui fournit les fonctions pour utiliser les fichiers dans un programme (open, >>, <<, getline, ...)
#include "Labo11Fonctions.h"

//using namespace std;				// Pour �viter de r�p�ter le std:: devant les instructions comme cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// D�claration des constantes
	const string FICHIER_DONNEES = "DonneesDesTitres.txt";
	const string FICHIER_RESULTAT = "TDM.txt";

	// D�claration des variables
	// 0. Si le programme doit acc�der au disque dur, cela prend un canal pour chaque fichier
	ifstream canalIn;		// Le canal d'entr�e ou de input ou de lecture : qui est l'�quivalent du cin >>
	ofstream canalOut;		// Le canal de sortie ou output ou en �criture : qui est l'�quivalent de cout <<
	// 1. On doit cr�er des variables pour chaque information que l'utilisateur tape au clavier ou celles fournies par le fichier d'entr�e
	//string nomChapitre;
	//int numeroPage;
	section laSectionCourante;
	// 2. Les variables pour calculer ou afficher le r�sultat doivent g�n�ralement �tre initialis�es au d�but du programme
	int numeroSection = 1;			// Au d�part, on commence par afficher le premier chapitre donc on met 1
	// 3. Les variables interm�diaires ???

	// On est pr�t � programmer la solution
	// On doit ouvrir les canaux vers les fichiers sources ou destination � l'aide de fonction
	ouvrirFichierEnLecture(FICHIER_DONNEES, canalIn);		// Appel de la fonction pour s'assurer que le canal sera bien ouvert
	creerFichierEnEcriture(FICHIER_RESULTAT, canalOut);

	// On va cr�er l'en-t�te dans le fichier de sortie � l'aide d'une fonction
	ecrireEnTete(canalOut, TITRE, 3/* indique le nombre de lignes faites apr�s l'affichage du titre*/);

	// On TENTE de lire le premier enregistrement dans le fichier d'entr�e � l'aide d'une fonction
	lireEnregistrement(canalIn, laSectionCourante);

	// On v�rifie si la lecture a bien r�ussi tant qu'on n'a pas atteint la fin du fichier (end of file :eof())
	while (!canalIn.eof())
	{
		// On affiche � l'�cran pour s'assurer que la lecture est correcte

		// On veut �crire l'enregistrement bien format� dans le fichier de sortie
		ecrireEnregistrement(canalOut, laSectionCourante, numeroSection);
		
		// On augmente le num�ro du chapitre pour le prochain affichage
		numeroSection++;

		// A LA FIN de la boucle, on doit TENTER de lire l'enregistrement suivant pour mettre � jour le eof
		laSectionCourante = lireEnregistrement(canalIn);

	}

	// On peut avoir apr�s la boucle �crire un pied de page dans le fichier de sortie

	canalIn.close();
	canalOut.close();




	return 0;
}