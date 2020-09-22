// But
// Auteur : Karine Moreau
// Date 2020-09-22

/*
Écrire un programme pour calculer le montant qu’un individu devra débourser pour faire un voyage dans une automobile louée. 
L’algorithme tient compte du kilométrage parcouru et de la durée du voyage qui sont soumises par le requérant.
Les différentes sources de dépenses sont :
o Coût de la location de 45$ par jour et comprend 250 km gratuits par jour.
o La consommation du véhicule est 7.6 litres aux 100 km.
o 1 litre d’essence coûte 1.25$
o 0.05$ du kilomètre est exigé pour chaque kilomètre supplémentaire.

*/

#include <iostream>

int main()
{
	setlocale(LC_ALL, "");

	// Première lecture de l'énoncé pour en extraire les informations que l'utilisateur doit fournir
	int kmParcouru;					// Nombre de km parcourus, on ne tient pas compte des décimales
	int nbJours;					// Nombre de jours de location. Pas à la demie journée, donc un entier

	// Deuxième lecture de l'énoncé pour en extraire le résultat final
	float montantTotal;				// Montant en argent que l'utilisateur doit débourser. 
									// Il contient des chiffres après la virgule => float
	// Variables pour les calculs intermédiaires 
	float coutLocation;
	float coutConsommation;
	float coutKmSupp;

	// Troisième lecture pour extraire les valeurs numériques : Les constantes : 
	// Utilisation du mot clé const et surtout la constante doit être initialisée au moment de sa déclaration
	const float COUT_LOCATION = 45;
	const int KM_GRATUIT = 250;
	const float CONSOMMATION = 7.6 / 100;			// Consommation au km au lieu de aux 100 km
	const float PRIX_ESSENCE = 1.25;
	const float KM_SUPP = 0.05;

	// Quatrième lecture : Quels calculs doit-on faire ?
	// Location du véhicule : nbJours * COUT_LOCATION
	// Consommation d'essence : kmParcouru * CONSOMMATION * PRIX_ESSENCE
	// Kilomètres supplémentaires  : Si cela dépasse le 250km/jour : (kmParcouru - nbJours * KM_GRATUIT)*KM_SUPP


/* Plan de tests
kmParcouru	nbJours	LocationVehicule	ConsommationEssence		kmGratuit	KmSupplementaire	coutKmSupp	montantTotal
250			1		1*45 = 45 $			250*0.076*1.25 =23.75$	250*1=250	kmParcouru - kmGratuit
																			250 - 250 = 0			0		45+23.75+0=68.75$	
300			1		1*45 = 45 $			300*0.076*1.25 = 28.50	250*1=250	300-250=50		50*0.05=2.5$	45+28.5+2.5 = 76$		
	
3000		10		10*45 = 450 $		3000*0.076*1.25=285		250*10=2500	3000-2500= 500		500*0.05=25$	450+285+25=760$	

0			0																								erreur	
0			1																								erreur
-10			-10																								erreur
1			0																								erreur
	*/

	// DEmander à l'utilisateur les valeurs de km parcourus et du nombre de jours
	std::cout << "Veuillez entrer le nombre de kilomètres parcourus : ";
	std::cin >> kmParcouru;

	// On continue le programme si le nombre de km est valide
	if (kmParcouru > 0)
	{
		// Demander à l'utilisateur la durée de la location
		std::cout << "Veuillez entrer le nombre de jours de location : ";
		std::cin >> nbJours;

		// ON continue le programme si la durée est valide
		if (nbJours > 0)
		{
			// Calcul des différents coûts
			coutLocation = nbJours * COUT_LOCATION;
			coutConsommation = kmParcouru * CONSOMMATION * PRIX_ESSENCE;
			// Si on dépasse le nombre de km gratuits
			if (kmParcouru > nbJours * KM_GRATUIT)
			{
				coutKmSupp = (kmParcouru - nbJours * KM_GRATUIT) * KM_SUPP;
			}
			else
			{
				coutKmSupp = 0;
			}

			montantTotal = coutLocation + coutConsommation + coutKmSupp;

			// Ici tous les calculs sont faits, il reste à afficher le résultat
			std::cout << "Facture de location de voiture" << std::endl;
			std::cout << "Cout Location : " << nbJours << "*" << COUT_LOCATION << " = " << coutLocation << " $"<< std::endl;
			std::cout << "Cout essence  : " << kmParcouru << "*" << CONSOMMATION *100  << "/100*" << PRIX_ESSENCE 
				      << " = " << coutConsommation << " $" << std::endl;
			std::cout << "Cout km supp  : " << coutKmSupp << " $" << std::endl;
			std::cout << "--------------------------------------" << std::endl;
			std::cout << "Montant total : " << montantTotal	<< " $" << std::endl;

		}
		else
		{
			std::cout << "Erreur : La durée doit être positive et différente de 0.";
		}
	}
	else
	{
		std::cout << "Erreur : Le nombre de kilomètre ne peut pas être nul ou négatif.";
	}









	return 0;
}
