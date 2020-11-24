// But : D�couvrir l'utilisation des fichiers pour fournir des informations ou enregistrer des r�sultats
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
#include <fstream>				// Biblioth�que pour utiliser les fichiers
#include <iomanip>				// Biblioth�que qui fournit des fonctions pour formater l'affichage (dimension des colonnes,
								// alignement du texte, pour formater l'affichage des nombres virgule, ...)

using namespace std;				// Pour �viter de r�p�ter le std:: devant les instructions comme cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");
	// D�claration des constantes
	/*
----------------------------------------------------------------------------------
Nom             Pr�nom              Eval 1    Eval 2    Eval 3     Total R�sultats 
----------------------------------------------------------------------------------	
	*/
	const int COL1 = 17;
	const int COL2 = 17;
	const int COL3 = 10;
	const int COL4 = 10;
	const int COL5 = 10;
	const int COL6 = 10;
	const int COL7 = 10;

	const int LIGNE = COL1 + COL2 + COL3 + COL4 + COL5 + COL6 + COL7;
	const string TITRE = "R�sultats du cours de programmation structur�e";


	// Premi�re partie : Cr�ation du canal d'entr�e comme le cin
	// 1. Il faut connaitre le nom du fichier qui contient les donn�es
	const string FICHIER_ENTREE = "Donnees.txt";
	const string FICHIER_RESULTAT = "Resultats.txt";


	// D�claration des variables
	// 2. Cr�er le canal (autoroute) pour faire circuler les donn�es du disque dur vers la m�moire vive beaucoup plus rapide 
	//    qui pourra �tre exploit�e par le programme. Il faut lui donner un nom (la 15) 
	//    et une direction (input : lecture : cin ou output : �criture : cout)
	ifstream ifEntree;
	ofstream ofSortie;				// Equivalent d'un cout mais pour afficher les r�sultats dans un fichier txt


	// 3. Il faut associer le canal � sa source qui est un fichier sur le disque dur
	ifEntree.open(FICHIER_ENTREE, ios::in);
	// 3. Il faut associer le canal de sortie � sa destination sur le disque dur
	ofSortie.open(FICHIER_RESULTAT, ios::out);				// Open va tenter de cr�er le fichier de sortie
															// Le mode ios::out �crase le fichier s'il est d�j� existant

	// 4. il faut s'assurer que le canal a bien �t� ouvert
	if (!ifEntree)
	{
		cerr << "Erreur : le fichier " << FICHIER_ENTREE << " n'a pas �t� ouvert correctement." << endl;
		cerr << "V�rifiez le nom du fichier et sa pr�sence sur le disque dur." << endl;
		cerr << "Ou v�rifiez que vous avez les droits n�cessaires pour ouvrir ce fichier" << endl;
		system("pause");
		// Le programme ne se d�roule pas comme pr�vu, on le quitte d�finitivement
		// return 400;      // return ne fait que quitter la fonction dans laquelle on se trouve. 
		                    // Si la fonction est le main, on quitte bien le programme. Sinon on quitte seulement la fonction
		// Pour quitter le programme, quelque soit l'endroit, on doit utiliser soit exit ou abort
		//abort();			// Quitte le programme sans code d'erreur
		exit(400);			// Quitte le programme avec un code d'erreur.

	}
	// 4. Il faut s'assurer que le canal de sortie a bien cr�� le fichier r�sultat
	if (!ofSortie)
	{
		cerr << "Erreur : le fichier " << FICHIER_RESULTAT << " n'a pas �t� cr��." << endl;
		cerr << "V�rifiez l'espace disponible sur le disque dur." << endl;
		cerr << "Ou v�rifiez que vous avez les droits n�cessaires pour cr�er ce fichier" << endl;
		system("pause");
		// On quitte le programme car on ne peut pas enregistrer les r�sultats
		exit(900);
	}

	// Ici les deux canaux sont en place : ifEntree peut remplacer le cin et ofSortie peut remplacer le cout

	// Une fois que le fichier de sortie est cr��, il faut souvent cr�er l'en-t�te du fichier
	/*
	----------------------------------------------------------------------------------
                  R�sultats du cours de programmation structur�e
	----------------------------------------------------------------------------------
	Nom             Pr�nom              Eval 1    Eval 2    Eval 3     Total R�sultats 
	----------------------------------------------------------------------------------
	*/

	// On fait la ligne de tirets
	// setw cr�e une colonne invisible de taille pass�e en param�tre dans laquelle les donn�es suivantes vont venir s'ins�rer.
	ofSortie << setfill('-') <<setw(LIGNE) << "-" << setfill(' ') << endl;
	ofSortie << setw((LIGNE - TITRE.length()) / 2) << " " << TITRE << endl;
	ofSortie << setfill('-') << setw(LIGNE) << "-" << setfill(' ') << endl;
	ofSortie << left <<setw(COL1) << "Nom" << setw(COL2) << "Pr�nom" << right << setw(COL3) << "Examen 1" << setw(COL4);
	ofSortie << "TP 1" << setw(COL5) << "Eval 3" << setw(COL6) << "Total" << left << setw(COL7) << " R�sultats" << right << endl;
	ofSortie << setfill('-') << setw(LIGNE) << "-" << setfill(' ') << endl;



	// Deuxi�me partie : La lecture des informations qui sont dans le fichier
	// 1. Pour lire les informations et les retenir, il faut des variables. 
	//    Ici, il faudra autant de variables qu'il y a de champs (colonnes) dans le fichier
	// D�claration des variables :
	// 1. les donn�es fournies par l'utilisateur et/ou par un fichier de donn�es
	string nomEtudiant;
	string prenomEtudiant;
	float noteEval1;
	float noteEval2;
	float noteEval3;
	// 2. Les r�sultats du programme. Ces variables doivent g�n�ralement �tre initialis�es, leur donne une valeur de d�part
	float noteFinale=0;				// c'est une somme, au d�part, il n'y a pas de note donc la somme peut �tre � 0
	int nbEtudiant =0 ;				// Au d�part ou si le fichier est vide, le nb d'�tudiant est � 0
	float noteMax;					// On ne peut pas initialiser ces trois prochaines variables pour l'instant
	float noteMin;
	string prenomMax;
	float moyenne= 0;				// Au d�part on n'a pas de note donc la moyenne est � 0
	string resultat;


	// 2. Il faut lire les informations dans le fichier en utilisant le canal comme on utilisait le cin
	// ON TENTE de Lire : ON ESSAIE, mais c'est pas s�r qu'on puisse lire des informations
	ifEntree >> nomEtudiant;			// Les becs de canard lisent l'information jusqu'au prochain espace, tabulation ou enter
	ifEntree >> prenomEtudiant;
	ifEntree >> noteEval1;
	ifEntree >> noteEval2;
	ifEntree >> noteEval3;

	// Si on a pu lire le premier enregistrement alors on peut prendre comme hypoth�se de D�PART (une seule fois) que cet �tudiant
	// a la meilleure note ou la pire note
	if (!ifEntree.eof())
	{
		noteFinale = noteEval1 + noteEval2 + noteEval3;
		noteMax = noteFinale;
		noteMin = noteFinale;
		prenomMax = prenomEtudiant;
	}


	// On va v�rifier si la lecture a bien r�ussi en interrogeant le canal pour savoir qu'il a atteint la fin du fichier
	// eof : end of file
	while (!ifEntree.eof())
	{
		// Ici on sait qu'on a bien des informations pour chaque champ
		// On peut appliquer des traitements (calculs) sur les donn�es lues
		
		// On calcule et affiche la note finale pour le cours
		noteFinale = noteEval1 + noteEval2 + noteEval3;
		if (noteFinale >= 60)
		{
			resultat = " Succ�s";
		}
		else
			resultat = " Echec";
		// On formate l'affichage des nombres r�els avec 2 chiffres apr�s la virgule. 
		// Il faut commencer par imposer que la virgule des float ne bouge pas. fixed
		// Quand fixed est en place alors setprecision indique le nombre de chiffres apr�s la virgule
		ofSortie << fixed << setprecision(2);
		ofSortie << left << setw(COL1) << nomEtudiant << setw(COL2) << prenomEtudiant << right << setw(COL3) << noteEval1 << setw(COL4);
		ofSortie << noteEval2 << setw(COL5) << noteEval3 << setw(COL6) << noteFinale << left << setw(COL7) << resultat << right << endl;




		// On doit ajuster les r�sultats qui seront afficher apr�s la boucle
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
	}// Fin du while eof


	// A la fin, apr�s la lecture de tous les enregistrements, 
	// on peut avoir d'autres traitements (calculs, ou afficher des r�sultats, ...)
	if (nbEtudiant > 0)
	{
		ofSortie << setfill('-') << setw(LIGNE) << "-" << setfill(' ') << endl;
		ofSortie << "Statistiques" << endl;
		// On voudrait savoir la moyenne totale du groupe
		moyenne = moyenne / nbEtudiant;
		ofSortie << left << setw(COL1) << "Moyenne" << setw(COL2) << " " << right << setw(COL3) << " " << setw(COL4);
		ofSortie << " " << setw(COL5) << " " << setw(COL6) << moyenne << left << setw(COL7) << " " << right << endl;
		ofSortie << setfill('-') << setw(LIGNE) << "-" << setfill(' ') << endl;


		// On voudrait connaitre la meilleure note et le pr�nom de l'�tudiant ayant cette meilleure note
		ofSortie << "La meilleure note est : " << noteMax << " obtenue par " << prenomMax << endl;
		// on voudrait connaitre la note la plus basse
		ofSortie << "La note la plus basse est : " << noteMin << endl;
		ofSortie << setfill('-') << setw(LIGNE) << "-" << setfill(' ') << endl;

	}
	else
		cout << "Le fichier est vide" << endl;


	cout << "Fin du fichier"<< endl;

	// A la fin du programme de fermer les fichiers que l'on a ouvert
	ifEntree.close();
	ofSortie.close();			// Pour ofSortie, cela force le syst�me d'exploitation � �crire sur le disque dur




	return 0;
}