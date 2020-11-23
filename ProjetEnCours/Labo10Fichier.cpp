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
	const string FICHIER_RESULTAT = "Resultats.txt";


	// Déclaration des variables
	// 2. Créer le canal (autoroute) pour faire circuler les données du disque dur vers la mémoire vive beaucoup plus rapide 
	//    qui pourra être exploitée par le programme. Il faut lui donner un nom (la 15) 
	//    et une direction (input : lecture : cin ou output : écriture : cout)
	ifstream ifEntree;
	ofstream ofSortie;				// Equivalent d'un cout mais pour afficher les résultats dans un fichier txt


	// 3. Il faut associer le canal à sa source qui est un fichier sur le disque dur
	ifEntree.open(FICHIER_ENTREE, ios::in);
	// 3. Il faut associer le canal de sortie à sa destination sur le disque dur
	ofSortie.open(FICHIER_RESULTAT, ios::out);				// Open va tenter de créer le fichier de sortie

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
	// Déclaration des variables :
	// 1. les données fournies par l'utilisateur et/ou par un fichier de données
	string nomEtudiant;
	string prenomEtudiant;
	int noteEval1;
	int noteEval2;
	int noteEval3;
	// 2. Les résultats du programme. Ces variables doivent généralement être initialisées, leur donne une valeur de départ
	int noteFinale=0;				// c'est une somme, au départ, il n'y a pas de note donc la somme peut être à 0
	int nbEtudiant =0 ;				// Au départ ou si le fichier est vide, le nb d'étudiant est à 0
	int noteMax;					// On ne peut pas initialiser ces trois prochaines variables pour l'instant
	int noteMin;
	string prenomMax;
	float moyenne= 0;				// Au départ on n'a pas de note donc la moyenne est à 0


	// 2. Il faut lire les informations dans le fichier en utilisant le canal comme on utilisait le cin
	// ON TENTE de Lire : ON ESSAIE, mais c'est pas sûr qu'on puisse lire des informations
	ifEntree >> nomEtudiant;			// Les becs de canard lisent l'information jusqu'au prochain espace, tabulation ou enter
	ifEntree >> prenomEtudiant;
	ifEntree >> noteEval1;
	ifEntree >> noteEval2;
	ifEntree >> noteEval3;

	// Si on a pu lire le premier enregistrement alors on peut prendre comme hypothèse de DÉPART (une seule fois) que cet étudiant
	// a la meilleure note ou la pire note
	if (!ifEntree.eof())
	{
		noteFinale = noteEval1 + noteEval2 + noteEval3;
		noteMax = noteFinale;
		noteMin = noteFinale;
		prenomMax = prenomEtudiant;
	}


	// On va vérifier si la lecture a bien réussi en interrogeant le canal pour savoir qu'il a atteint la fin du fichier
	// eof : end of file
	while (!ifEntree.eof())
	{
		// Ici on sait qu'on a bien des informations pour chaque champ
		// On peut appliquer des traitements (calculs) sur les données lues
		
		ofSortie << "Après la lecture d'une ligne dans le fichier : " << endl;
		ofSortie << "Nom : " << nomEtudiant << endl;
		ofSortie << "Prénom : " << prenomEtudiant << endl;
		ofSortie << "Note 1 : " << noteEval1 << endl;
		ofSortie << "Note 2 : " << noteEval2 << endl;
		ofSortie << "Note 3 : " << noteEval3 << endl;
		// On calcule et affiche la note finale pour le cours
		noteFinale = noteEval1 + noteEval2 + noteEval3;
		ofSortie << "Note finale " << noteFinale << endl;
		if (noteFinale >= 60)
		{
			ofSortie << "Félicitations ! vous avez réussi le cours." << endl;
		}
		else
			ofSortie << "Malgré tous vos efforts, il faut reprendre le cours." << endl;
		// On doit ajuster les résultats qui seront afficher après la boucle
		moyenne = moyenne + noteFinale;
		nbEtudiant++;
		if (noteFinale > noteMax)
		{
			noteMax = noteFinale;
			prenomMax = prenomEtudiant;
		}
		if (noteFinale < noteMin)
		{
			noteMin = noteFinale;
		}



		// A LA FIN DE LA BOUCLE WHILE : il faut TENTER de lire l'enregistrement suivant
		ifEntree >> nomEtudiant;			// Les becs de canard lisent l'information jusqu'au prochain espace, tabulation ou enter
		ifEntree >> prenomEtudiant;
		ifEntree >> noteEval1;
		ifEntree >> noteEval2;
		ifEntree >> noteEval3;
	}


	// A la fin, après la lecture de tous les enregistrements, 
	// on peut avoir d'autres traitements (calculs, ou afficher des résultats, ...)
	if (nbEtudiant > 0)
	{
		// On souhaite connaitre le nombre total d'étudiants
		ofSortie << "Le nombre total d'étudiants est : " << nbEtudiant << endl;
		// On voudrait savoir la moyenne totale du groupe
		moyenne = moyenne / nbEtudiant;
		ofSortie << "La moyenne du groupe est de : " << moyenne << endl;
		// On voudrait connaitre la meilleure note et le prénom de l'étudiant ayant cette meilleure note
		ofSortie << "La meilleure note est : " << noteMax << " obtenue par " << prenomMax << endl;
		// on voudrait connaitre la note la plus basse
		ofSortie << "La note la plus basse est : " << noteMin << endl;

	}
	else
		cout << "Le fichier est vide" << endl;


	cout << "Fin du fichier"<< endl;






	return 0;
}