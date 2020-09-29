//But : afficher un menu à l'écran tant que l'utilisateur ne demande pas à quitter 
/*      
			1. Addition
			2. Soustraction
			3. Multiplication
			4. Division
			5. Modulo
*/
// Demander à l'utilisateur d'entrer son choix. Si le nombre n'est pas compris entre 1 et 5 afficher un message d'erreur
// sinon confirmer le choix

#include <iostream>

int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables
	int reponse;
	// Affichage du menu
	std::cout << "1. Addition" << std::endl;
	std::cout << "2. Soustraction" << std::endl;
	std::cout << "3. Multiplication" << std::endl;
	std::cout << "4. Division" << std::endl;
	std::cout << "5. Modulo" << std::endl;
	std::cout << "6. Quitter" << std::endl;
	std::cout << std::endl;

	std::cout << "Votre choix --> ";
	std::cin >> reponse;
	

	// Tant que l'utilisateur ne quitte pas, on affiche le menu
	while (reponse <= 5)
	{
		// Affichage du menu
		std::cout << "1. Addition" << std::endl;
		std::cout << "2. Soustraction" << std::endl;
		std::cout << "3. Multiplication" << std::endl;
		std::cout << "4. Division" << std::endl;
		std::cout << "5. Modulo" << std::endl;
		std::cout << "6. Quitter" << std::endl;
		std::cout << std::endl;

		// Réinitialiser la variable de boucle
		std::cout << "Votre choix --> ";
		std::cin >> reponse;

	}

	

	return 0;
}



