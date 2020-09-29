// But : L'utilisateur souhaite prendre l'ascenseur. On suppose qu'il est à l'étage 1. On lui demande quel étage il veut atteindre.
// si l'étage indiqué par l'utilisateur est pair, alors l'ascendeur monte pour les étages pairs, 2, 4, 6, 8,...
// si l'étage indiqué est impair alors l'ascenseur indique 1, 3, 5, 7, ... L'ascenseur fait des bonds de deux
// Le programme affiche l'étage où il est rendu et indique quand les portes s'ouvrent et que l'utilisateur est arrivé à destination.
// Auteur : Karine Moreau
// Date : 2020-09-24

#include <iostream>

using namespace std;				// Pour éviter de répéter le std:: devant les instructions comme cout, cin, endl, ...

int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables
	int etageArrivee;
    int etageDepart;

	cout << "Indiquez l'étage à atteindre -->";
	cin >> etageArrivee;

	cout << "Vous êtes à l'étage 1, vous montez dans l'ascenseur..." << endl;
    /*
    if (etageArrivee % 2 == 0)
    {
        etageDepart = 2;
    }
    else
    {
        etageDepart = 3;
    }

    for (int numEtage = etageDepart; numEtage <= etageArrivee; numEtage = numEtage + 2)
    {
        cout << "Vous êtes à l'étage : " << numEtage << endl;
    }
    */

    if (etageArrivee % 2 == 0)
    {
        // Déclaration et initialisation (=) de la variable de boucle (i)
        int i = 2;


        // On a bien la condition pour répéter la boucle
        while (i <= etageArrivee)
        {
            cout << i <<endl;

            // La réinitialisation de la variable de boucle, il faut utiliser ++ ou l'opérateur d'affectation i= ??
            i = i + 2;  // i+=2;
        }
    }
    else
    {
        // Déclaration et initialisation (=) de la variable de boucle (i)
        int i = 3;


        // On a bien la condition pour répéter la boucle
        while (i <= etageArrivee)
        {
            cout << i <<endl;

            // La réinitialisation de la variable de boucle, il faut utiliser ++ ou l'opérateur d'affectation i= ??
            i = i + 2;  // i+=2;
        }

    }



	cout << "Vous êtes arrivé, les portes s'ouvrent ..." << endl;

	return 0;
}