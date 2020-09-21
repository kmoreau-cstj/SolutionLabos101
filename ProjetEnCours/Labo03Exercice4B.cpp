// But : Demander � l'utilisateur une lettre, et le programme indique s'il s'agit d'une voyelle ou d'une consonne
// Auteur : Karine Moreau
// Date : 2020-09-21
/*
char permet de d�clarer une variable dans le but de stocker un caract�re

char lettre = 'a';
Comment dire la lettre a en C++, il faut la mettre entre apostrophe 'a', '0', '+'
*/


#include <iostream>

void main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables
	char lettre;

	// Demander � l'utilisateur d'entrer une lettre
	std::cout << "Veuillez entrer une lettre de l'alphabet : ";
	std::cin >> lettre;

	// On s'assure qu'il s'agit d'une lettre
	if (lettre >= 'A' && lettre <= 'Z' || lettre >= 'a' && lettre <= 'z')
	{
		switch (lettre)
		{
		case 'a' :
		case 'A' :
		case 'e' :
		case 'E' :
		case 'i' :
		case 'I' :
		case 'o' :
		case 'O' :
		case 'u' :
		case 'U' :
		case 'y' :
		case 'Y' :
			std::cout << lettre << " est une voyelle";
			break;

		default:
			std::cout << lettre << " est une consonne";
			break;
		}
	}
	else
	{
		std::cout << "Erreur : " << lettre << " n'est pas une lettre de l'alphabet";
	}
}



