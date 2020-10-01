//But : afficher un menu à l'écran tant que l'utilisateur n'entre pas un chiffre compris entre 1 et 6, 
// le programme réaffiche le menu
/*      
			1. Addition
			2. Soustraction
			3. Multiplication
			4. Division
			5. Modulo
*/
// Demander à l'utilisateur d'entrer son choix. Tant que le nombre n'est pas compris entre 1 et 6 afficher un message d'erreur
// sinon confirmer le choix

#include <iostream>

int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables
	int reponse;

	std::cout << "1. Addition:" << std::endl;
	std::cout << "2. Soustraction:" << std::endl;
	std::cout << "3. Multiplication:" << std::endl;
	std::cout << "4. Division:" << std::endl;
	std::cout << "5. Modulo:" << std::endl;
	std::cout << "6. Quitter:" << std::endl;
	// AVANT la boucle, la variable est bien initialisée
	std::cin >> reponse;				// C'est l'utilisateur qui initialise la variable

	// reponse = 0;						// c'est le programmeur qui initialise la variable

	while (reponse < 1 || reponse > 6)
	{
		std::cout << "Erreur. Entrez un nombre compris entre 1 & 6." << std::endl;
		system("pause");
		system("cls"); // Clear screen
		std::cout << "1. Addition:" << std::endl;
		std::cout << "2. Soustraction:" << std::endl;
		std::cout << "3. Multiplication:" << std::endl;
		std::cout << "4. Division:" << std::endl;
		std::cout << "5. Modulo:" << std::endl;
		std::cout << "6. Quitter:" << std::endl;

		// A LA FIn de la boucle, la variable est bien réinitialisée
		std::cin >> reponse;
	}


	

	return 0;
}



