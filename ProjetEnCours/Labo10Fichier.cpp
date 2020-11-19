// But : Découvrir l'utilisation des fichiers pour fournir des informations ou enregistrer des résultats
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
#include <fstream>				// Bibliothèque pour utiliser les fichiers

using namespace std;				// Pour éviter de répéter le std:: devant les instructions comme cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");
	// Déclaration des constantes


	// Première partie : Création du canal d'entrée comme le cin
	// 1. Il faut connaitre le nom du fichier qui contient les données
	const string FICHIER_ENTREE = "Donnees.txt";


	// Déclaration des variables
	// 2. Créer le canal (autoroute) pour faire circuler les données du disque dur vers la mémoire vive beaucoup plus rapide 
	//    qui pourra être exploitée par le programme. Il faut lui donner un nom (la 15) 
	//    et une direction (input : lecture : cin ou output : écriture : cout)
	ifstream ifEntree;

	// 3. Il faut associer le canal à sa source qui est un fichier sur le disque dur
	ifEntree.open(FICHIER_ENTREE, ios::in);

	// 4. il faut s'assurer que le canal a bien été ouvert
	if (!ifEntree)
	{
		cerr << "Erreur : le fichier " << FICHIER_ENTREE << " n'a pas été ouvert correctement." << endl;
		cerr << "Vérifiez le nom du fichier et sa présence sur le disque dur." << endl;
		cerr << "Ou vérifiez que vous avez les droits nécessaires pour ouvrir ce fichier" << endl;
		system("pause");
		// Le programme ne se déroule pas comme prévu, on le quitte définitivement
		// return 400;      // return ne fait que quitter la fonction dans laquelle on se trouve. 
		                    // Si la fonction est le main, on quitte bien le programme. Sinon on quitte seulement la fonction
		// Pour quitter le programme, quelque soit l'endroit, on doit utiliser soit exit ou abort
		//abort();			// Quitte le programme sans code d'erreur
		exit(400);			// Quitte le programme avec un code d'erreur.

	}


	// Deuxième partie : La lecture des informations qui sont dans le fichier
	// 1. Pour lire les informations et les retenir, il faut des variables. 
	//    Ici, il faudra autant de variables qu'il y a de champs (colonnes) dans le fichier
	string nomEtudiant;
	string prenomEtudiant;
	int noteEval1;
	int noteEval2;
	int noteEval3;

	// 2. Il faut lire les informations dans le fichier en utilisant le canal comme on utilisait le cin
	// ON TENTE de Lire : ON ESSAIE, mais c'est pas sûr qu'on puisse lire des informations
	ifEntree >> nomEtudiant;			// Les becs de canard lisent l'information jusqu'au prochain espace, tabulation ou enter
	ifEntree >> prenomEtudiant;
	ifEntree >> noteEval1;
	ifEntree >> noteEval2;
	ifEntree >> noteEval3;


	// On va vérifier si la lecture a bien réussi en interrogeant le canal pour savoir qu'il a atteint la fin du fichier
	while (!ifEntree.eof())
	{
		cout << "Après la lecture d'une ligne dans le fichier : " << endl;
		cout << "Nom : " << nomEtudiant << endl;
		cout << "Prénom : " << prenomEtudiant << endl;
		cout << "Note 1 : " << noteEval1 << endl;
		cout << "Note 2 : " << noteEval2 << endl;
		cout << "Note 3 : " << noteEval3 << endl;

		// A LA FIN DE LA BOUCLE WHILE : il faut TENTER de lire l'enregistrement suivant
		ifEntree >> nomEtudiant;			// Les becs de canard lisent l'information jusqu'au prochain espace, tabulation ou enter
		ifEntree >> prenomEtudiant;
		ifEntree >> noteEval1;
		ifEntree >> noteEval2;
		ifEntree >> noteEval3;
	}


	cout << "Fin du fichier"<< endl;






	return 0;
}