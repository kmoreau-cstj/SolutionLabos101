// But : Afficher les 10 premiers entiers positifs avec une boucle for et ensuite avec une boucle while
// Auteur : Karine Moreau
// Date : 2020-09-28


/*for (	�tape d'initialisation de la variable de boucle (int compteur = 0) et c'est fait avant le bloc d'instructions;
		�tape Condition portant sur la variable de boucle (compteur < FIN) et elle doit �tre vraie pour rentrer dans la boucle,
		faite avant le bloc d'instructions
		le bloc d'instruction est ex�cut� si la condition est vraie
		�tape de r�initialisation (compteur++), il faut que la valeur de la variable de boucle puisse �tre modifi�e 
		pour que la condition devienne fausse, pour sortir de la boucle et cela se fait � la fin du bloc d'instructions
{

}

for(int compteur = 0;compteur < FIN; compteur++)
{
}

int compteur = 0;
while (compteur < FIN)
// On r�p�te le bloc d'instructions
{


compteur++;
}


*/

#include <iostream>
#include <Windows.h>

using namespace std;				// Pour �viter de r�p�ter le std:: devant les instructions comme cout, cin, endl, ...

int main()
{
	setlocale(LC_ALL, "");
	
	for (int compteur = 0; compteur < 10; compteur++)
	{
		cout << compteur << endl;
	}


	int compteur = 0;

	while (compteur < 10)
	{
		cout << compteur << endl;


		// Avant de quitter le bloc d'instructions, A LA FIN, on doit changer la valeur de compteur
		compteur++;
	}
	

	return 0;
}