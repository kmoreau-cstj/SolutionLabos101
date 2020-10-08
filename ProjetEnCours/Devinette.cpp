// But :
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
#include <time.h>


using namespace std;

int main()
{
	int random; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
	srand(time(0)); // pour activer l’aléatoire dans le programme
	random = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans iRandom

	setlocale(LC_ALL, "");
	// Déclaration des constantes
	const int NB_CHANCES = 5;

	// Déclaration des variables
	int nombre;				// Nombre proposé par l'utilisateur
	int nbEssais = 1;		// Au début du programme l'utilisateur s'apprête à faire son premier essai

	cout << random << endl;

	// AVANT LA boucle, la variable de boucle est bien demandée à l'utilisateur
	cout << "Veuillez entrer le nombre à deviner. Vous avez "<< NB_CHANCES << ". Il doit être compris entre 0 et 100 : " <<endl;
	cout << "Essai #" << nbEssais << " : ";
	cin >> nombre;

	// Le programme doit valider le nombre pour qu'il soit bien compris entre 0 et 100
	while (!(nombre >=0 && nombre<=100))
	{
		cout << "Erreur : le nombre doit être compris entre 0 et 100." << endl;

		// A LA FIN de la boucle, la variable de boucle doit ETRE absolument réinitialisée
		cout << "Veuillez entrer le nombre à deviner. Il doit être compris entre 0 et 100 : ";
		cout << "Essai #" << nbEssais << " : ";
		cin >> nombre;
	}

	// Quand le programme doit s'arrêter : si l'utilisateur a trouvé le bon nombre ou si l'utilisateur a utilisé toutes les chances
	while (!(nombre == random || nbEssais == NB_CHANCES))
	{
		// L'utilisateur n'a pas encore trouvé le bon nombre. Le programme va l'aider
		cout << "Ce n'est pas le bon nombre. ";
		if (nombre > random)
		{
			cout << "Votre nombre est trop grand." << endl;
		}
		else
		{
			cout << "Votre nombre est trop petit." << endl;
		}

		// A LA FIN de la boucle, les variables de boucles doivent être réinitialisées
		nbEssais++;
		cout << "Veuillez entrer le nombre à deviner. Il doit être compris entre 0 et 100 : ";
		cout << "Essai #" << nbEssais << " : ";
		cin >> nombre;

		// Le programme doit valider le nombre pour qu'il soit bien compris entre 0 et 100
		while (!(nombre >= 0 && nombre <= 100))
		{
			cout << "Erreur : le nombre doit être compris entre 0 et 100." << endl;

			// A LA FIN de la boucle, la variable de boucle doit ETRE absolument réinitialisée
			cout << "Veuillez entrer le nombre à deviner. Il doit être compris entre 0 et 100 : ";
			cout << "Essai #" << nbEssais << " : ";
			cin >> nombre;
		}
		

	}

	// Ici, il y a deux possibilités : L'utilisateur a trouvé le bon ou bien il a utilisé toutes les chances
	if (nombre == random)
	{
		cout << "Bravo. Vous avez trouvé le bon nombre en " << nbEssais << " essai(s) !" << endl;
	}
	else
	{
		cout << "Malheureusement vous n'avez pas trouvé le bon nombre qui était " << random << ". " << endl;
	}

	return 0;
}

/* Plan de tests
random			nombre			nbEssais			ecran
17				-10				1					erreur
17				102				1					erreur
17				50				2					non, trop grand
17				103				2					erreur
17				25				3					non, trop grand
17				15				4					non, trop petit
17				20				5					non, trop grand
17				17									Bravo en 5 essais

65				65				1					Bravo en 1 essai

86				50
86				75
86				90
86				85
86				87									Perdu c'était 86


*/