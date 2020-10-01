//But : 
// Les conducteurs se soucient du kilométrage parcouru par leurs automobiles.Un conducteur décide d'enregistrer la quantité 
// de kilomètres parcourus et la quantité de litres utilisés à chaque plein d'essence.
// Développez un programme afin d'entrer les quantités de kilomètres parcourus et de litres utilisés à chaque plein d'essence.
// Le programme doit calculer et afficher le taux de litres aux 100 kilomètres obtenu entre chaque plein d'essence. 
// Après avoir traité toutes les informations, le programme doit calculer le taux combiné de litres aux 100 kilomètres
// pour les pleins d'essence. Le programme s'arrête si le conducteur entre -1 comme nombre de litres

/*Plan de tests
	nb_litres		nb_km			taux aux 100km				cumul
	12.8			28				45.71
	10.3			200				5.15
	5				120				4.17
	-1															18.34 = (45.71 + 5.15 + 4.17)/3 
autre plan de tests

	-1															0
	
	
	*/

#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables
	float nb_litres, nb_km;//informations fournies par l'utilisateur
	float tauxAu100km; //Resultat que le programme doit afficher TauxAu100km=(nb_litres*100)/nb_km
	float cumul = 0; //Resultat que le prog doit afficher cumul=cumul+tauxAu100km
	int nbDeFois = 0; //Variable intermediaire pour que le programme puisse diviser le cumul par le nombre de plein que l'utilisateur a fait
	const int NEG = -1;



	cout << "Entrez le nombre le litres :";
	cin >> nb_litres;
	//Tant que l'utilisateur ne rentre pas -1 comme nombre de litre le programme se repete
	while (nb_litres != NEG)
	{

		cout << "Entrez le kilometrage :";
		cin >> nb_km;
		//On calcule le tauxAu100km
		tauxAu100km = ((nb_litres * 100) / nb_km);

		cout << tauxAu100km << endl;

		cout << "Entrez le nombre le litres :";
		cin >> nb_litres;


	}

	return 0;
}



