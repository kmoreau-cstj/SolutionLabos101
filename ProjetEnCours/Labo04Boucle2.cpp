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

using namespace std;				// Pour éviter de répéter le std:: devant les instructions comme cout, cin, endl, ...


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

	// le programme affiche le menu
	cout << "1. Cadres" << endl;
	cout << "2. Travailleurs à tarif horaire" << endl;
	cout << "3. Travailleurs à la commission" << endl;
	cout << "4. Travailleur à la pièce" << endl;
	cout << "q. Quitter le programme" << endl;

	// Le programme demande le choix de l'utilisateur
	cout << "Votre choix --> ";
	cin >> typeEmploye;

	// le programme s'assure que le choix fait par l'utilisateur est valide
	//while ((typeEmploye < TYPE_MIN || typeEmploye > TYPE_MAX) && typeEmploye != 'q' && typeEmploye != 'Q')

	while (!(typeEmploye >= TYPE_MIN && typeEmploye <=TYPE_MAX || typeEmploye == 'q' || typeEmploye == 'Q'  ))
	{
		cout << "Erreur : le choix..." << endl;
		// A LA FIN DE la boucle, il faut réinitialiser la variable de boucle
		
		// Le programme demande le choix de l'utilisateur
		cout << "Votre choix --> ";
		cin >> typeEmploye;
	}


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
		cout << "1. Cadres" << endl;
		cout << "2. Travailleurs à tarif horaire" << endl;
		cout << "3. Travailleurs à la commission" << endl;
		cout << "4. Travailleur à la pièce" << endl;
		cout << "q. Quitter le programme" << endl;

		// Le programme demande le choix de l'utilisateur
		cout << "Votre choix --> ";
		cin >> typeEmploye;

		// le programme s'assure que le choix fait par l'utilisateur est valide
		//while ((typeEmploye < TYPE_MIN || typeEmploye > TYPE_MAX) && typeEmploye != 'q' && typeEmploye != 'Q')

		while (!(typeEmploye >= TYPE_MIN && typeEmploye <= TYPE_MAX || typeEmploye == 'q' || typeEmploye == 'Q'))
		{
			cout << "Erreur : le choix..." << endl;
			// A LA FIN DE la boucle, il faut réinitialiser la variable de boucle

			// Le programme demande le choix de l'utilisateur
			cout << "Votre choix --> ";
			cin >> typeEmploye;
		}
	}
	return 0;
}