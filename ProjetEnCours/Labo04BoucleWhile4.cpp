// But :
/*�crivez un programme qui lit 50 nombres et qui d�termine et affiche la plus grande valeur.
Le programme doit utiliser trois variables :
Compteur: Variable comptant jusqu'� 10
Nombre : Le nombre entr� par l'utilisateur
Max : La plus grande valeur de tous les nombres
*/
// Auteur : Karine Moreau
// Date : 2020-09-24

#include <iostream>
#include <Windows.h>

using namespace std;				// Pour �viter de r�p�ter le std:: devant les instructions comme cout, cin, endl, ...

int main()
{
	setlocale(LC_ALL, "");

	int nombre;
	int max;
	const int CMB_NB = 5;

	cout << "Veuillez entrer le nombre 1 : ";

	cin >> max;

	int compteur = 2;

	while ( compteur <= CMB_NB )
	{
		cout << "Veuillez entrer le nombre " << compteur << ": ";
		cin >> nombre;

		if (nombre > max)
		{
			max = nombre;
		}
	
		compteur++;
	}

	cout << "Le nombre max est : " << max;


	return 0;
}