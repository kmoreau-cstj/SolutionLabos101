// But : demander à l'utilisateur deux entiers. Le programme indique si le premier nombre est 
//       le multiple du deuxième nombre.
// 6 et 3 : 6 = 2 * 3 : 6 est bien multiple de 3
// 7 et 4 : 7 = ?? * 4 : 7 n'est pas multiple de 4

#include <iostream>


int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables
	int nombre1;
	int nombre2;


	std::cout << "Veuillez entrer un entier :";
	std::cin >> nombre1 ;

	std::cout << "Veuillez entrer un deuxième entier :";
	std::cin >> nombre2 ;

	// est-ce que le nombre1 est divisible par le nombre2 ?
	if (nombre1 % nombre2 == 0)
	{
		std::cout << nombre1 << " est multiple " << nombre2;
	}
	else
	{
		std::cout << nombre1 << " n'est pas multiple " << nombre2;

	}


	return 0;
}
