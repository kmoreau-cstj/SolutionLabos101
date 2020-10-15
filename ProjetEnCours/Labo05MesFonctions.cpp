#include "Labo05MesFonctions.h"		// Si c'est une biblioth�que personnelle, c'Est avec des guillemets ""
#include <iostream>					// Si c'est la bibioth�que du C++ c'Est avec des becs de canard <>

using namespace std;

void afficherMenu()
{
	// le programme affiche le menu
	cout << "1. Travailleurs Cadres" << endl;
	cout << "2. Travailleurs � tarif horaire" << endl;
	cout << "3. Travailleurs � la commission" << endl;
	cout << "4. Travailleurs � la pi�ce" << endl;
	cout << "q. Quitter le programme" << endl;
}

char validerChoix(char min, char max, char quitter)
{
	// D�claration des variables
	char choix;

	// Le programme demande le choix de l'utilisateur
	cout << "Votre choix --> ";
	cin >> choix;

	// le programme s'assure que le choix fait par l'utilisateur est valide
	//while ((typeEmploye < TYPE_MIN || typeEmploye > TYPE_MAX) && typeEmploye != 'q' && typeEmploye != 'Q')

	while (!(choix >= min && choix <= max || choix == quitter))
	{
		cout << "Erreur : le choix..." << endl;
		// A LA FIN DE la boucle, il faut r�initialiser la variable de boucle

		// Le programme demande le choix de l'utilisateur
		cout << "Votre choix --> ";
		cin >> choix;
	}

	// Ici le choix est bien compris entre min et max ou est �gal � quitter
	return choix;
}
