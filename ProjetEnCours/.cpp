// But :
/*
Une compagnie rémunère ses employés selon leur fonction. Ils peuvent être
1. cadres (recevant un salaire hebdomadaire fixe),
2. travailleurs à tarif horaire (recevant un taux horaire fixe régulier pour les 40 premières heures et un taux horaire 
   temps et demi soit 1.5 fois le taux horaire régulier pour les heures supplémentaires)
3. travailleurs à la commission (recevant 250$ plus 5.7% de leurs ventes hebdomadaires brutes)
4. travailleur à la pièce (recevant un taux fixe d'argent pour chaque article produit; 
   chaque travailleur à la pièce de cette compagnie ne travaille que sur un seul type d'article)

   
q. Quitter

Écrivez un programme qui calcule la paie pour chaque employé. 
Vous ne connaissez pas à l'avance le nombre d'employés. 
Chaque type d'employés possède son propre code de paie : le code de paie 1 représente les cadres, 
                                                         le code de paie 2 représente les travailleurs à tarif horaire, 
														 le code de paie 3 représente les travailleurs à la commission 
														 le code de paie 4 représente les travailleurs à la pièce.
Utilisez une structure switch pour calculer la paie de chaque employé en fonction du code de paie de cet employé.
A l'intérieur du switch, invitez l'utilisateur à entrer les faits appropriés requis par votre programme 
pour calculer la paie de chaque employé en fonction du code de paie de l'employé.

*/
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
#include "Labo05MesFonctions.h"		// Pour avoir accès aux fonctions que le programmeur a créées

using namespace std;				// Pour éviter de répéter le std:: devant les instructions comme cout, cin, endl, ...

// Fonction : 3 informations nécessaires pour créer une fonction
// 1. int : type de retour de la fonction (int char float double bool string void) pour dire quelle information la fonction a calculé
// 2. main : le nom de la fonction c'est comme le nom des variables (ne commence pas par un chiffre, ne contient pas d'espace, 
//           pas d'accent). On va prendre une convention : le premier mot est un verbe à l'infinitif suivi d'un complément
//           calculerMoyenne, calculerSomme, calculerMax, afficherMenu, validerChoix, etrePair, etrePositif, etreMultiple, etreBissextile
// 3. liste des paramètres entre parenthèse : (type1 nomParametre1, type2 nomParametre2, ...)
//			(int nb1, int nb2, int nb3)	, (int min, int max)

// int calculerMoyenne(int combienDeValeur)
// void afficherMenu()
// bool etrePair(int nb)

// Pour mettre en place des fonctions, il faut 3 étapes
// 1. on doit déclarer l'existence de la fonction dans un fichier d'en-tête (header), qui porte l'extension .h => créer une bibliothèque
// 2. On doit développer le code de la fonction dans un fichier .cpp différent que celui qui contient le main
// 3. on doit appeler la fonction pour qu'elle puisse s'exécuter


int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des constantes
	const float SALAIRE_COMMISSION = 250;
	const float POURCENT_VENTE = 0.057;
	const float TEMPS_SUPP = 1.5;
	const float TEMPS_SEMAINE = 40;
	const char TYPE_MIN = '1';
	const char TYPE_MAX = '4';
	
	// Déclaration des variables fournies par l'utilisateur
	float salaireCadreFixe;
	float tauxHoraire;
	float nbHeures;
	float ventes;
	float tauxArticle;
	int nbArticles;
	char typeEmploye;

	// Déclaration des variables pour le résultat du programme
	float montantPaie;

	// Calcul des différents salaires
	// 1. montantPaie = salaireCadreFixe
	// 2. si le nbHeures < = TEMPS_SEMAINE alors montantPaie = TauxHoraire * NbHeures
	//    sinon montantPaie = (tauxHoraire * TEMPS_SEMAINE)	+ (nbHeures - TEMPS_SEMAINE) * 	TEMPS_SUPP * tauxHoraire
	// 3. montantPaie = SALAIRE_COMMISSION + ventes * POURCENT_VENTE
	// 4. montantPaie = nbArticles * tauxArticle

	// le programme affiche le menu en appelant la fonction
	afficherMenu();
	
	// On appelle la fonction pour qu'elle s'exécute et on donne la valeur pour chaque paramètre
	typeEmploye = validerChoix(TYPE_MIN, TYPE_MAX, 'q');


	// Ici on a un choix correct entre 1 et 4 ou q

	// Tant que l'utilisateur ne choisit pas de quitter le programme calcule la paie
	// while ((typeEmploye != 'q' && typeEmploye != 'Q'))

	while (!(typeEmploye == 'q' || typeEmploye =='Q'))
	{
		// selon le type d'employé 
		switch (typeEmploye)
		{
		case '1':
			// Le programme demande les informations de la paie et les valide
			cout << "Veuillez entrer le salaire hebdomaire du cadre :";
			cin >> salaireCadreFixe;
			// le programme fait le calcul et l'affiche
			montantPaie = salaireCadreFixe;
			break;
		case '2':
			cout << "Veuillez entrer le nombre d'heures :";
			cin >> nbHeures;
			cout << "Veuillez entrer le taux horaire :";
			cin >> tauxHoraire;
			if (nbHeures <= TEMPS_SEMAINE)
			{
				montantPaie = tauxHoraire * nbHeures;
			}
			else
			{
				montantPaie = (tauxHoraire * TEMPS_SEMAINE) + (nbHeures - TEMPS_SEMAINE) * TEMPS_SUPP * tauxHoraire;
			}
			break;
		case '3':
			cout << "Veuillez entrer le montant des ventes :";
			cin >> ventes;
			montantPaie = SALAIRE_COMMISSION + ventes * POURCENT_VENTE;
			break;
		case '4':
			cout << "Veuillez entrer le nombre d'articles :";
			cin >> nbArticles;
			cout << "Veuillez entrer le taux des articles :";
			cin >> tauxArticle;
			montantPaie = nbArticles * tauxArticle;
			break;
		} // Fin du switch

		cout << "L'employé a un salaire hebdomaire de " << montantPaie << endl;

		// le programme réaffiche le menu pour traiter un nouvel employé
		// A LA FIN de la boucle, la variable (typeEmploye) DOIT être réinitialisée
		// le programme affiche le menu
		afficherMenu();

		typeEmploye = validerChoix(TYPE_MIN, TYPE_MAX, 'q');
	}
	return 0;
}