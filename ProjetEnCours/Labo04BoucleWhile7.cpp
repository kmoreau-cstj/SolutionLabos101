//But : 
// Les conducteurs se soucient du kilom�trage parcouru par leurs automobiles.Un conducteur d�cide d'enregistrer la quantit� 
// de kilom�tres parcourus et la quantit� de litres utilis�s � chaque plein d'essence.
// D�veloppez un programme afin d'entrer les quantit�s de kilom�tres parcourus et de litres utilis�s � chaque plein d'essence.
// Le programme doit calculer et afficher le taux de litres aux 100 kilom�tres obtenu entre chaque plein d'essence. 
// Apr�s avoir trait� toutes les informations, le programme doit calculer le taux combin� de litres aux 100 kilom�tres
// pour les pleins d'essence. Le programme s'arr�te si le conducteur entre -1 comme nombre de litres

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

	// D�claration des variables
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



