// But : Demander à l'utilisateur une lettre, et le programme indique s'il s'agit d'une voyelle ou d'une consonne
// Auteur : Karine Moreau
// Date : 2020-09-21
/*
char permet de déclarer une variable dans le but de stocker un caractère

char lettre = 'a';
Comment dire la lettre a en C++, il faut la mettre entre apostrophe 'a', '0', '+'
*/


#include <iostream>

void main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables
	char lettre;

	// Demander à l'utilisateur d'entrer une lettre
	std::cout << "Veuillez entrer une lettre de l'alphabet : ";
	std::cin >> lettre;

	// On s'assure qu'il s'agit d'une lettre
	if (lettre >= 'A' && lettre <= 'Z' || lettre >= 'a' && lettre <= 'z')
	{
		if (lettre == 'a' || lettre == 'e' || lettre == 'i' || lettre == 'o' || lettre == 'u' || lettre == 'y' ||
			lettre == 'A' || lettre == 'E' || lettre == 'I' || lettre == 'O' || lettre == 'U' || lettre == 'Y')
		{
			std::cout << lettre << " est une voyelle";
		}
		else
		{
			std::cout << lettre << " est une consonne";
		}

	}
	else
	{
		std::cout << "Erreur : " << lettre << " n'est pas une lettre de l'alphabet";
	}
}



