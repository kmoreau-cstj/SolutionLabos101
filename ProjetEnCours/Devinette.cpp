// But :
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
#include <time.h>


using namespace std;

int main()
{
	int random; // permet de m�moriser le nombre choisi al�atoirement par l�ordinateur
	srand(time(0)); // pour activer l�al�atoire dans le programme
	random = rand() % 101; // l�ordinateur calcule un nombre al�atoire entre 0 et 100 et le stocke dans iRandom

	setlocale(LC_ALL, "");
	// D�claration des constantes
	const int NB_CHANCES = 5;

	// D�claration des variables
	int nombre;				// Nombre propos� par l'utilisateur
	int nbEssais = 1;		// Au d�but du programme l'utilisateur s'appr�te � faire son premier essai

	cout << random << endl;

	// AVANT LA boucle, la variable de boucle est bien demand�e � l'utilisateur
	cout << "Veuillez entrer le nombre � deviner. Vous avez "<< NB_CHANCES << ". Il doit �tre compris entre 0 et 100 : " <<endl;
	cout << "Essai #" << nbEssais << " : ";
	cin >> nombre;

	// Le programme doit valider le nombre pour qu'il soit bien compris entre 0 et 100
	while (!(nombre >=0 && nombre<=100))
	{
		cout << "Erreur : le nombre doit �tre compris entre 0 et 100." << endl;

		// A LA FIN de la boucle, la variable de boucle doit ETRE absolument r�initialis�e
		cout << "Veuillez entrer le nombre � deviner. Il doit �tre compris entre 0 et 100 : ";
		cout << "Essai #" << nbEssais << " : ";
		cin >> nombre;
	}

	// Quand le programme doit s'arr�ter : si l'utilisateur a trouv� le bon nombre ou si l'utilisateur a utilis� toutes les chances
	while (!(nombre == random || nbEssais == NB_CHANCES))
	{
		// L'utilisateur n'a pas encore trouv� le bon nombre. Le programme va l'aider
		cout << "Ce n'est pas le bon nombre. ";
		if (nombre > random)
		{
			cout << "Votre nombre est trop grand." << endl;
		}
		else
		{
			cout << "Votre nombre est trop petit." << endl;
		}

		// A LA FIN de la boucle, les variables de boucles doivent �tre r�initialis�es
		nbEssais++;
		cout << "Veuillez entrer le nombre � deviner. Il doit �tre compris entre 0 et 100 : ";
		cout << "Essai #" << nbEssais << " : ";
		cin >> nombre;

		// Le programme doit valider le nombre pour qu'il soit bien compris entre 0 et 100
		while (!(nombre >= 0 && nombre <= 100))
		{
			cout << "Erreur : le nombre doit �tre compris entre 0 et 100." << endl;

			// A LA FIN de la boucle, la variable de boucle doit ETRE absolument r�initialis�e
			cout << "Veuillez entrer le nombre � deviner. Il doit �tre compris entre 0 et 100 : ";
			cout << "Essai #" << nbEssais << " : ";
			cin >> nombre;
		}
		

	}

	// Ici, il y a deux possibilit�s : L'utilisateur a trouv� le bon ou bien il a utilis� toutes les chances
	if (nombre == random)
	{
		cout << "Bravo. Vous avez trouv� le bon nombre en " << nbEssais << " essai(s) !" << endl;
	}
	else
	{
		cout << "Malheureusement vous n'avez pas trouv� le bon nombre qui �tait " << random << ". " << endl;
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
86				87									Perdu c'�tait 86


*/