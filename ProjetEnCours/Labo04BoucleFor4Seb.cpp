// But :
/*Écrivez un programme qui lit 50 nombres et qui détermine et affiche la plus grande valeur.
Le programme doit utiliser trois variables :
Compteur: Variable comptant jusqu'à 10
Nombre : Le nombre entré par l'utilisateur
Max : La plus grande valeur de tous les nombres
*/
// Auteur : Karine Moreau
// Date : 2020-09-24


/*

si la valeurDeDepart est plus petite que la valeur d'arrivée, alors dans la condition c'est le signe plus petit que < et le compteur doit augmenter
for (int compteur = valeurDeDepart; compteur < valeurDArrivee; compteur++)
{

}

for (int compteur = 1; compteur < 5; compteur++)
{

}


si la valeurDeDepart est plus grande que la valeur d'arrivée, alors dans la condition c'est le signe plus grand que > et le compteur doit diminuer
for (int compteur = valeurDeDepart; compteur > valeurDArrivee; compteur--)
{

}

for (int compteur = 5; compteur >= 1; compteur--)
{

}

ATTENTION : Si la valeurDeDepart est égale à 0, c'est plus petit strictement
ATTENTION : Si la valeurDeDepart est égale à 1, c'est plus petit ou égal

on veut compter 5 fois
for (int compteur = 0; compteur < 5; compteur++)
{

}
on veut compter 5 fois
for (int compteur = 1; compteur <= 5; compteur++)
{

}
ATTENTION : Si la valeurDArrivée est égale à 0, c'est plus grand strictement
ATTENTION : Si la valeurDArrivée est égale à 1, c'est plus grand ou égal

on veut compter 5 fois
for (int compteur = 5; compteur > 0; compteur--)
{

}
on veut compter 5 fois
for (int compteur = 5; compteur >= 1; compteur--)
{

}


Si on veut faire des bonds de plus que 1, par exemple de 5 en 5
for (int compteur = valeurDeDepart; compteur < valeurDArrivee; compteur = compteur + bond)
{

}

Si on veut faire des bonds de moins que 1, par exemple de -5 en -5
for (int compteur = valeurDeDepart; compteur > valeurDArrivee; compteur = compteur - bond)
{

}

*/







#include <iostream>
#include <Windows.h>

using namespace std;				// Pour éviter de répéter le std:: devant les instructions comme cout, cin, endl, ...

int main()
{
	setlocale(LC_ALL, "");

	int nombre;
	int max;
	const int CMB_NB = 5;


	for (int compteur = 1; compteur <= CMB_NB; compteur++)
	{
		cout << "Veuillez entrer le nombre " << compteur << ": ";
		cin >> nombre;

		if (compteur == 1 || nombre > max )
		{
			max = nombre;
		}
	}

	cout << "Le nombre max est : " << max;


	return 0;
}