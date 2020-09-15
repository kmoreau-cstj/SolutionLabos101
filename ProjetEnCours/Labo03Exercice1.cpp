//But : afficher un menu à l'écran 
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
	std::cout << std::endl;

	std::cout << "Votre choix --> ";
	std::cin >> reponse;
	
	// Validation du choix de l'utilisateur
	// Si la réponse est entre 1 et 5 => confirmer l'opération
	// && Et commercial, perluète ou esperluète
	
	//if (reponse <= 5 && reponse >=1)
	// Erreur possible : if (1 <= reponse <= 5)


	if (reponse >=1 && reponse <=5)
	
	{
		std::cout << "le choix est correct. ";
		std::cout << "la réponse " << reponse ;
		if (reponse == 1)
		{
			std::cout << " l'addition";
		}
		if (reponse == 2)
		{
			std::cout << " la soustration";

		}
		if (reponse == 3)
		{
			std::cout << " la multiplication";

		}
		if (reponse == 4)
		{
			std::cout << " la division";

		}
		if (reponse == 5)
		{
			std::cout << " le modulo";

		}

		switch (reponse)
		{
		case 1 :
			std::cout << "L'addition";
			break;
		case 2 :
			std::cout << "La soustration";
			break;
		case 3 :
			std::cout << "L'addition";
			break;
		}


	}

	// Sinon, afficher une erreur
	else
	{
		std::cout << "Erreur : le choix doit être compris entre 1 et 5.";
	}


	return 0;
}



