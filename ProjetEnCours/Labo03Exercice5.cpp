// But : 
/*
Ecrire un programme qui permet lire entier nb et affiche, selon sa valeur, un seul et unique message parmi les 4 
• nb est un multiple de 2.
• nb est un multiple de 3.
• nb est a la fois multiple de 2 et de 3.
• nb n'est ni multiple de 2, ni de 3
*/

/*
plan de tests
nb					résultat
2=2*1				2 est multiple de 2
3=3*1				3 est multiple de 3
4=2*2				4 est multiple de 2			Le reste de la division par 2 est égal à 0
5					5 n'est ni multiple de 2, ni de 3
6					6 est à la fois multiple de 2 et de 3
7					7 n'est ni multiple de 2, ni de 3
8					8 est multiple de 2	
9					9 est multiple de 3
0
12
-15
-18

*/

#include <iostream>
void main()
{
	setlocale(LC_ALL, "");
	//Déclaration des variables
	int nb;

	// Demander la valeur à l'utilisateur
	std::cout << "Veuillez entrer un nombre entier :";
	std::cin >> nb;

	// Dire si le nombre est multiple de 2, de 3 ou les deux ou pas pantoute !!!
	if (nb % 2 == 0 && nb %3 == 0)
				std::cout << nb << " est multiple 2 et de 3";
	else if (nb % 2 == 0)
			std::cout << nb << " est multiple 2";
		else if (nb % 3 == 0)
				std::cout << nb << " est multiple 3";
			else
				std::cout << nb << " n'est ni multiple 2 ni de 3";

	
}



