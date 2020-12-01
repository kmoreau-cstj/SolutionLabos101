// But : G�n�rer des �tiquettes � partir des contacts de la messagerie
// Auteur : Karine Moreau
// Date : 2020-12-01

#include "Labo11FonctionsExercice2.h"

				// Pour �viter de r�p�ter le std:: devant les instructions comme cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// D�claration des constantes

	const string FICHIER_DONNEE = "Contacts.txt";
	const string FICHIER_RESULTAT = "Etiquettes.txt";

	// D�claration des variables
	// 0. Les noms des canaux
	ifstream canalIn;
	ofstream canalOut;
	// 1. Les informations fournies par l'utilisateur et/ou les fichiers en entr�e
	Contact contactUn;
	Contact contactDeux;

	// 2. les r�sultats � calculer ou � afficher
	/*
-------------------------------------------------------------------------------
|Renault Paul                          |Martin Jean Michel                    |
|125, rue des Lilas                    |6587, rue des Ch�nes                  |
|St-J�r�me (QC) J7Z 2G4                |St-J�r�me (QC) J7Z 2H4                |
|450-436-8512 514-705-8745 450-435-6958|450-438-1111 514-705-9854 450-435-6958|
|PaulRe@hotmail.com                    |MartinJM@hotmail.com                  |
-------------------------------------------------------------------------------

	*/
	// 3. des variables interm�diaires


	// Ouverture et cr�ation des fichiers
	ouvrirFichierEnLecture(FICHIER_DONNEE, canalIn);
	creerFichierEnEcriture(FICHIER_RESULTAT, canalOut);


	// On a peut-�tre un en-t�te � �crire dans le fichier de sortie

	// On TENTE de lire un enregistrement
	lireEnregistrement(canalIn, contactUn);

	// Tant qu'on n'a pas atteint la fin du fichier
		// On applique les traitements sur l'enregistrement lu

		// On �crit dans le fichier de sortie

		// On TENTE de lire l'enregistrement suivant



	// On a peut-�tre un pied de page � �crire dans le fichier de sortie

	// On ferme les fichiers





	return 0;
}


