// But : Les instructions conditionnelles
// Exercice 1 : si le nombre choisi par l'utilisateur est plus grand que 10 et il est plus petit que 20
//              alors il a gagn� 
//              sinon si le nombre est 20 il a droit � une deuxi�me chance, 
//			    sinon il a perdu
// Auteur : Karine Moreau
// Date : 2020-09-15


#include <iostream>

int main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables
	int nombre;

	std::cout << "Veuillez entrer un nombre :";
	std::cin >> nombre;

	if (nombre > 10 && nombre <20)
	{
		std::cout << "Vous avez gagn� !!";
	}
	else    // nombre <=10 || nombre >=20
	
	{
		if (nombre == 20)
		{
			std::cout << "Vous avez droit � une seconde chance !!";
		}
		else
		{
			std::cout << "Vous avez perdu !!";
		}
	}


	/*


	if (nombre > 10)
	{
		if (nombre < 20)
			std::cout << "Vous avez gagn� !!";
		else
		{
			if (nombre == 20)
			{
				std::cout << "Vous avez droit � une seconde chance !!";
			}
			else
			{
				std::cout << "Vous avez perdu !!";
			}
		}
	}
	else
	{
		if (nombre == 20)
		{
			std::cout << "Vous avez droit � une seconde chance !!";
		}
		else
		{
			std::cout << "Vous avez perdu !!";
		}
	}
	*/
/* plan de tests
	nombre
	8				vous avez perdu
	10				vous avez perdu
	11				Vous avez gagn� !!
	30				Vous avez perdu
	20				Vous avez droit � une seconde chance !!


*/



/*
	else
	{

	}

	if (true)
	{
		if (true)
		{
			if (true)
			{
				if (true)
				{

				}
				else
				{

				}
			}
		}
		else
		{

		}
	}
	else
	{
		if (true)
		{

		}
	}
*/

	return 0;
}