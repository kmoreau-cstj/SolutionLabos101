//But : demander à l'utilisateur 3 nombres entiers et dire lequel des trois est LE plus grand
// Auteur : Karine Moreau
// Date : 2020-09-17

#include <iostream>


int main()
{
	setlocale(LC_ALL, "");
	// déclaration des variables
	int nb1, nb2, nb3;

	std::cout << "Veuillez entrer l'entier 1 : ";
	std::cin >> nb1;
	std::cout << "Veuillez entrer l'entier 2 : ";
	std::cin >> nb2;
	std::cout << "Veuillez entrer l'entier 3 : ";
	std::cin >> nb3;


	// Comparer les nombres entre eux et dire quelle valeur est la plus grande
	if (nb1 >= nb2 && nb1 >= nb3 )
	{
		std::cout << "La plus grande valeur est : " << nb1;
	}
	else
	{
		if (nb2 >= nb1 && nb2 >= nb3)
		{
			std::cout << "La plus grande valeur est : " << nb2;
		}
		else
			std::cout << "La plus grande valeur est : " << nb3;
	}
	return 0;
}





/*
plan de tests
valeur1		valeur2		valeur3						Résultat  
1			2			3							La valeur la plus grande est 3
1			3			2							La valeur la plus grande est 3
3			1			2							La valeur la plus grande est 3
1			1			3							La valeur la plus grande est 3
3			3			2							La valeur la plus grande est 3
3			3			3							La valeur la plus grande est 3
-1			-2			-3							La valeur la plus grande est -1
-1			0			1							La valeur la plus grande est 1

*/