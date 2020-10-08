// But :
/*
Une compagnie r�mun�re ses employ�s selon leur fonction. Ils peuvent �tre
1. cadres (recevant un salaire hebdomadaire fixe),
2. travailleurs � tarif horaire (recevant un taux horaire fixe r�gulier pour les 40 premi�res heures et un taux horaire 
   temps et demi soit 1.5 fois le taux horaire r�gulier pour les heures suppl�mentaires)
3. travailleurs � la commission (recevant 250$ plus 5.7% de leurs ventes hebdomadaires brutes)
4. travailleur � la pi�ce (recevant un taux fixe d'argent pour chaque article produit; 
   chaque travailleur � la pi�ce de cette compagnie ne travaille que sur un seul type d'article)

   
q. Quitter

�crivez un programme qui calcule la paie pour chaque employ�. 
Vous ne connaissez pas � l'avance le nombre d'employ�s. 
Chaque type d'employ�s poss�de son propre code de paie : le code de paie 1 repr�sente les cadres, 
                                                         le code de paie 2 repr�sente les travailleurs � tarif horaire, 
														 le code de paie 3 repr�sente les travailleurs � la commission 
														 le code de paie 4 repr�sente les travailleurs � la pi�ce.
Utilisez une structure switch pour calculer la paie de chaque employ� en fonction du code de paie de cet employ�.
A l'int�rieur du switch, invitez l'utilisateur � entrer les faits appropri�s requis par votre programme 
pour calculer la paie de chaque employ� en fonction du code de paie de l'employ�.

*/
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>

using namespace std;				// Pour �viter de r�p�ter le std:: devant les instructions comme cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// D�claration des constantes
	const float SALAIRE_COMMISSION = 250;
	const float POURCENT_VENTE = 0.057;
	const float TEMPS_SUPP = 1.5;
	const float TEMPS_SEMAINE = 40;
	const char TYPE_MIN = '1';
	const char TYPE_MAX = '4';
	
	// D�claration des variables fournies par l'utilisateur
	float salaireCadreFixe;
	float tauxHoraire;
	float nbHeures;
	float ventes;
	float tauxArticle;
	int nbArticles;
	char typeEmploye;

	// D�claration des variables pour le r�sultat du programme
	float montantPaie;

	// Calcul des diff�rents salaires
	// 1. montantPaie = salaireCadreFixe
	// 2. si le nbHeures < = TEMPS_SEMAINE alors montantPaie = TauxHoraire * NbHeures
	//    sinon montantPaie = (tauxHoraire * TEMPS_SEMAINE)	+ (nbHeures - TEMPS_SEMAINE) * 	TEMPS_SUPP * tauxHoraire
	// 3. montantPaie = SALAIRE_COMMISSION + ventes * POURCENT_VENTE
	// 4. montantPaie = nbArticles * tauxArticle

	// le programme affiche le menu
	cout << "1. Cadres" << endl;
	cout << "2. Travailleurs � tarif horaire" << endl;
	cout << "3. Travailleurs � la commission" << endl;
	cout << "4. Travailleur � la pi�ce" << endl;
	cout << "q. Quitter le programme" << endl;

	// Le programme demande le choix de l'utilisateur
	cout << "Votre choix --> ";
	cin >> typeEmploye;

	// le programme s'assure que le choix fait par l'utilisateur est valide
	//while ((typeEmploye < TYPE_MIN || typeEmploye > TYPE_MAX) && typeEmploye != 'q' && typeEmploye != 'Q')

	while (!(typeEmploye >= TYPE_MIN && typeEmploye <=TYPE_MAX || typeEmploye == 'q' || typeEmploye == 'Q'  ))
	{
		cout << "Erreur : le choix..." << endl;
		// A LA FIN DE la boucle, il faut r�initialiser la variable de boucle
		
		// Le programme demande le choix de l'utilisateur
		cout << "Votre choix --> ";
		cin >> typeEmploye;
	}


	// Ici on a un choix correct entre 1 et 4 ou q

	// Tant que l'utilisateur ne choisit pas de quitter le programme calcule la paie
	// while ((typeEmploye != 'q' && typeEmploye != 'Q'))

	while (!(typeEmploye == 'q' || typeEmploye =='Q'))
	{
		// selon le type d'employ� 
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

		cout << "L'employ� a un salaire hebdomaire de " << montantPaie << endl;

		// le programme r�affiche le menu pour traiter un nouvel employ�
		// A LA FIN de la boucle, la variable (typeEmploye) DOIT �tre r�initialis�e
		// le programme affiche le menu
		cout << "1. Cadres" << endl;
		cout << "2. Travailleurs � tarif horaire" << endl;
		cout << "3. Travailleurs � la commission" << endl;
		cout << "4. Travailleur � la pi�ce" << endl;
		cout << "q. Quitter le programme" << endl;

		// Le programme demande le choix de l'utilisateur
		cout << "Votre choix --> ";
		cin >> typeEmploye;

		// le programme s'assure que le choix fait par l'utilisateur est valide
		//while ((typeEmploye < TYPE_MIN || typeEmploye > TYPE_MAX) && typeEmploye != 'q' && typeEmploye != 'Q')

		while (!(typeEmploye >= TYPE_MIN && typeEmploye <= TYPE_MAX || typeEmploye == 'q' || typeEmploye == 'Q'))
		{
			cout << "Erreur : le choix..." << endl;
			// A LA FIN DE la boucle, il faut r�initialiser la variable de boucle

			// Le programme demande le choix de l'utilisateur
			cout << "Votre choix --> ";
			cin >> typeEmploye;
		}
	}
	return 0;
}