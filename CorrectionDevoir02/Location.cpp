// But
// Auteur : Karine Moreau
// Date 2020-09-22

/*
�crire un programme pour calculer le montant qu�un individu devra d�bourser pour faire un voyage dans une automobile lou�e. 
L�algorithme tient compte du kilom�trage parcouru et de la dur�e du voyage qui sont soumises par le requ�rant.
Les diff�rentes sources de d�penses sont :
o Co�t de la location de 45$ par jour et comprend 250 km gratuits par jour.
o La consommation du v�hicule est 7.6 litres aux 100 km.
o 1 litre d�essence co�te 1.25$
o 0.05$ du kilom�tre est exig� pour chaque kilom�tre suppl�mentaire.

*/

#include <iostream>

int main()
{
	setlocale(LC_ALL, "");

	// Premi�re lecture de l'�nonc� pour en extraire les informations que l'utilisateur doit fournir
	int kmParcouru;					// Nombre de km parcourus, on ne tient pas compte des d�cimales
	int nbJours;					// Nombre de jours de location. Pas � la demie journ�e, donc un entier

	// Deuxi�me lecture de l'�nonc� pour en extraire le r�sultat final
	float montantTotal;				// Montant en argent que l'utilisateur doit d�bourser. 
									// Il contient des chiffres apr�s la virgule => float
	// Variables pour les calculs interm�diaires 
	float coutLocation;
	float coutConsommation;
	float coutKmSupp;

	// Troisi�me lecture pour extraire les valeurs num�riques : Les constantes : 
	// Utilisation du mot cl� const et surtout la constante doit �tre initialis�e au moment de sa d�claration
	const float COUT_LOCATION = 45;
	const int KM_GRATUIT = 250;
	const float CONSOMMATION = 7.6 / 100;			// Consommation au km au lieu de aux 100 km
	const float PRIX_ESSENCE = 1.25;
	const float KM_SUPP = 0.05;

	// Quatri�me lecture : Quels calculs doit-on faire ?
	// Location du v�hicule : nbJours * COUT_LOCATION
	// Consommation d'essence : kmParcouru * CONSOMMATION * PRIX_ESSENCE
	// Kilom�tres suppl�mentaires  : Si cela d�passe le 250km/jour : (kmParcouru - nbJours * KM_GRATUIT)*KM_SUPP


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

	// DEmander � l'utilisateur les valeurs de km parcourus et du nombre de jours
	std::cout << "Veuillez entrer le nombre de kilom�tres parcourus : ";
	std::cin >> kmParcouru;

	// On continue le programme si le nombre de km est valide
	if (kmParcouru > 0)
	{
		// Demander � l'utilisateur la dur�e de la location
		std::cout << "Veuillez entrer le nombre de jours de location : ";
		std::cin >> nbJours;

		// ON continue le programme si la dur�e est valide
		if (nbJours > 0)
		{
			// Calcul des diff�rents co�ts
			coutLocation = nbJours * COUT_LOCATION;
			coutConsommation = kmParcouru * CONSOMMATION * PRIX_ESSENCE;
			// Si on d�passe le nombre de km gratuits
			if (kmParcouru > nbJours * KM_GRATUIT)
			{
				coutKmSupp = (kmParcouru - nbJours * KM_GRATUIT) * KM_SUPP;
			}
			else
			{
				coutKmSupp = 0;
			}

			montantTotal = coutLocation + coutConsommation + coutKmSupp;

			// Ici tous les calculs sont faits, il reste � afficher le r�sultat
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
			std::cout << "Erreur : La dur�e doit �tre positive et diff�rente de 0.";
		}
	}
	else
	{
		std::cout << "Erreur : Le nombre de kilom�tre ne peut pas �tre nul ou n�gatif.";
	}









	return 0;
}
