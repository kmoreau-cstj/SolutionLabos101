// But : Demander à l'utilisateur un nombre positif composé de 5 chiffres et les afficher verticalement, sinon
//       informer l'utilisateur de son erreur
// Auteur : Karine Moreau
// Date : 2020-09-14


#include <iostream>

int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables
	int entier;


	std::cout << "Veuillez entrer un nombre composé de 5 chiffres :";
	std::cin >> entier;

	// Le programme doit vérifier si le nombre contient bien 5 chiffres (fr)
	// le nombre doit être compris          10 000  <= nombre <= 99 999 (maths)
	if (entier < 10000)
	{
		std::cout << entier << " contient moins de 5 chiffres ou est négatif.";
	}
	else     // ici on sait que le nombre est plus grand ou égal à 10 000
	{
		// Il faut vérifier que le nombre est exactement 5 chiffres et pas plus
		if (entier >= 100000 )
		{
			std::cout << entier << " contient plus de 5 chiffres.";
		}
		else          // ici le nombre est bien compris entre 10 000 inclu et 100 000 non inclu
		{
			std::cout << entier << " contient bien 5 chiffres.";
			// 12345 = 1 * 10 000 + 2 * 1 000 + 3 * 100 + 4 * 10 + 5 * 1
			std::cout << std::endl << entier / 10000 ;
			std::cout << std::endl << entier / 1000 % 10;
			std::cout << std::endl << entier / 100 % 10;
			std::cout << std::endl << entier / 10 % 10 ;
			std::cout << std::endl << entier / 1 % 10;
		}
		
	}


	return 0;
}

/*
entier				résultat affiché à l'écran
15					15 contient moins de 5 chiffres
123					123	contient moins de 5 chiffres
234567				234567	contient plus de 5 chiffres
-12345				-12345  contient bien 5 chiffres
12345				12345	contient bien 5 chiffres


*/