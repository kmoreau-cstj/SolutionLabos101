// But :
/*
demander à l'utilisateur d'entrer un nombre compris entre 1 et 70.
Si le nombre est bien compris entre 1 et 70 alors le programme affiche autant d'étoiles que le nombre entré.
sinon il affiche erreur

Nombre						Résultat à l'écran
4							4 : ****
10							10 : **********
71							71 : erreur
0							0 : erreur
1							1 : *
-5							-5 : erreur
*/
// Auteur : Karine Moreau
// Date : 2020-09-28


#include <iostream>
#include <Windows.h>

using namespace std;				// Pour éviter de répéter le std:: devant les instructions comme cout, cin, endl, ...

int main()
{
	setlocale(LC_ALL, "");
	
	
	int combienEtoileTuVeux;
	const char STAR = '+';
	const int MAX = 55;
	const int MIN = 5;

	cout << " Veuillez entrer un nombre entre " << MIN << " et " << MAX << ":";
	cin >> combienEtoileTuVeux;
	cout << combienEtoileTuVeux << " : ";

	if (combienEtoileTuVeux >= MIN && combienEtoileTuVeux <= MAX)
	{
		for (int compteur = 1; compteur <= combienEtoileTuVeux; compteur++)
		{
			cout << STAR;
		}
	}
	else
	{
		cout << "Erreur";
	}


	return 0;
}