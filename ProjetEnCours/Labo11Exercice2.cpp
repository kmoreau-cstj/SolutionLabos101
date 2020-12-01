// But : Générer des étiquettes à partir des contacts de la messagerie
// Auteur : Karine Moreau
// Date : 2020-12-01

#include "Labo11FonctionsExercice2.h"

				// Pour éviter de répéter le std:: devant les instructions comme cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des constantes

	const string FICHIER_DONNEE = "Contacts.txt";
	const string FICHIER_RESULTAT = "Etiquettes.txt";

	// Déclaration des variables
	// 0. Les noms des canaux
	ifstream canalIn;
	ofstream canalOut;
	// 1. Les informations fournies par l'utilisateur et/ou les fichiers en entrée
	Contact contactUn;
	Contact contactDeux;

	// 2. les résultats à calculer ou à afficher
	/*
-------------------------------------------------------------------------------
|Renault Paul                          |Martin Jean Michel                    |
|125, rue des Lilas                    |6587, rue des Chênes                  |
|St-Jérôme (QC) J7Z 2G4                |St-Jérôme (QC) J7Z 2H4                |
|450-436-8512 514-705-8745 450-435-6958|450-438-1111 514-705-9854 450-435-6958|
|PaulRe@hotmail.com                    |MartinJM@hotmail.com                  |
-------------------------------------------------------------------------------

	*/
	// 3. des variables intermédiaires


	// Ouverture et création des fichiers
	ouvrirFichierEnLecture(FICHIER_DONNEE, canalIn);
	creerFichierEnEcriture(FICHIER_RESULTAT, canalOut);


	// On a peut-être un en-tête à écrire dans le fichier de sortie

	// On TENTE de lire un enregistrement
	lireEnregistrement(canalIn, contactUn);

	// Tant qu'on n'a pas atteint la fin du fichier
		// On applique les traitements sur l'enregistrement lu

		// On écrit dans le fichier de sortie

		// On TENTE de lire l'enregistrement suivant



	// On a peut-être un pied de page à écrire dans le fichier de sortie

	// On ferme les fichiers





	return 0;
}


