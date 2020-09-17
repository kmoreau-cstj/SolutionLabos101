//But : demander à l'utilisateur 5 nombres entiers et dire lequel des cinq est LE plus grand avec la contrainte de ne faire 
// que 4 comparaisons
// Auteur : Karine Moreau
// Date : 2020-09-17

#include <iostream>


int main()
{
	setlocale(LC_ALL, "");
	// déclaration des variables
	int nb1, nb2, nb3, nb4, nb5, lePlusGrand;

	std::cout << "Veuillez entrer l'entier 1 : ";
	std::cin >> nb1;
	std::cout << "Veuillez entrer l'entier 2 : ";
	std::cin >> nb2;
	std::cout << "Veuillez entrer l'entier 3 : ";
	std::cin >> nb3;
	std::cout << "Veuillez entrer l'entier 4 : ";
	std::cin >> nb4;
	std::cout << "Veuillez entrer l'entier 5 : ";
	std::cin >> nb5;

	lePlusGrand = nb1;			// Au départ, faisons l'hypothèse que nb1 est la valeur la plus grande

	// Comparer les nombres entre eux et dire quelle valeur est la plus grande
	if (nb2 >lePlusGrand)
	{
		lePlusGrand = nb2;
	}
	if (nb3 > lePlusGrand)
	{
		lePlusGrand = nb3;
	}
	if (nb4 > lePlusGrand)
	{
		lePlusGrand = nb4;
	}
	if (nb5 > lePlusGrand)
	{
		lePlusGrand = nb5;
	}
	std::cout << "La plus grande valeur est : " << lePlusGrand;
	
		
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