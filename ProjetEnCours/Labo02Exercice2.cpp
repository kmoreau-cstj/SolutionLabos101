// But : Demander deux entiers à l'utilisateur et dire lequel des deux entiers est le plus grand
// ex : 15 et 12 : 15 est le plus grand
// ex : 10 et 14 : 14 est le plus grand
// ex : -2 et 0 :   0 est le plus grand
// ex : -2 et -6 : -2 est le plus grand
// ex : 5 et 5 :	5 est le plus grand
#include <iostream>

int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables
	int nombre1;
	int nombre2;

	std::cout << "Veuillez entrer un entier :";
	std::cin >> nombre1;

	std::cout << "Veuillez entrer un deuxième entier :";
	std::cin >> nombre2;

	// est-ce que le nombre1 est divisible par le nombre2 ?
	if ( nombre1 > nombre2)
	{
		std::cout << nombre1 << " est le plus grand.";
	}
	else         // ici nombre 1 est plus petit ou égal à nombre2
	{
		std::cout << nombre2 << " est le plus grand." ;

	}
	return 0;
}
