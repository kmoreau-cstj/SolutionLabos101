// But : Le programme demande deux entiers � l'utilisateur et compare ces deux nombres
// Auteur : Karine Moreau
// Date : 2020-09-10

#include <iostream>

void main()
{
	setlocale(LC_ALL, "");			// Convertir correctement les accents de Windows � la console

	// Ici au d�but du programme, on d�clare les variables
	int nombre1;
	int nombre2;



	// Le programme invite l'utilisateur � taper un nombre entier : Il affiche un message
	std::cout << "Veuillez entrer un nombre entier : ";
	// Le programme va lire les informations tap�es au clavier
	std::cin >> nombre1;

	// On invite l'utilisateur � entrer le deuxi�me nombre
	std::cout << "Veuillez entre le deuxi�me nombre entier : ";
	// On le programme stocke la valeur dans la deuxi�me variable
	std::cin >> nombre2;

	// Le programme compare les deux nombres et indique s'ils sont pareils ou pas
	// Dans les parenth�ses du if, il faut mettre la question/condition qu'on se pose, qui doit r�pondre
	// vrai ou faux
	if (nombre1 == nombre2)
	{	// Ouverture d'un nouveau bloc d'instructions qui sera ex�cut� seulement si la condition est vraie
		std::cout << nombre1 << " est �gal � " << nombre2;
	}
	else
	{
		std::cout << nombre1 << " n'est pas �gal � " << nombre2;
	}

}
// Plan de tests
/*
	nombre1			nombre2				R�sultat attendu
	12				15					12 n'est pas �gal � 15
	10				10					10 est �gal � 10
	-1				0					-1 n'est pas �gal � 0
	-2				-2					-2 est �gal � -2
*/