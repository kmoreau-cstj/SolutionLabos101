// But : Le programme demande deux entiers à l'utilisateur et compare ces deux nombres
// Auteur : Karine Moreau
// Date : 2020-09-10

#include <iostream>

void main()
{
	setlocale(LC_ALL, "");			// Convertir correctement les accents de Windows à la console

	// Ici au début du programme, on déclare les variables
	int nombre1;
	int nombre2;



	// Le programme invite l'utilisateur à taper un nombre entier : Il affiche un message
	std::cout << "Veuillez entrer un nombre entier : ";
	// Le programme va lire les informations tapées au clavier
	std::cin >> nombre1;

	// On invite l'utilisateur à entrer le deuxième nombre
	std::cout << "Veuillez entre le deuxième nombre entier : ";
	// On le programme stocke la valeur dans la deuxième variable
	std::cin >> nombre2;

	// Le programme compare les deux nombres et indique s'ils sont pareils ou pas
	// Dans les parenthèses du if, il faut mettre la question/condition qu'on se pose, qui doit répondre
	// vrai ou faux
	if (nombre1 == nombre2)
	{	// Ouverture d'un nouveau bloc d'instructions qui sera exécuté seulement si la condition est vraie
		std::cout << nombre1 << " est égal à " << nombre2;
	}
	else
	{
		std::cout << nombre1 << " n'est pas égal à " << nombre2;
	}

}
// Plan de tests
/*
	nombre1			nombre2				Résultat attendu
	12				15					12 n'est pas égal à 15
	10				10					10 est égal à 10
	-1				0					-1 n'est pas égal à 0
	-2				-2					-2 est égal à -2
*/