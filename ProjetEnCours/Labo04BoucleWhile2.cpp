// But : L'utilisateur souhaite prendre l'ascenseur. On suppose qu'il est � l'�tage 1. On lui demande quel �tage il veut atteindre.
// si l'�tage indiqu� par l'utilisateur est pair, alors l'ascendeur monte pour les �tages pairs, 2, 4, 6, 8,...
// si l'�tage indiqu� est impair alors l'ascenseur indique 1, 3, 5, 7, ... L'ascenseur fait des bonds de deux
// Le programme affiche l'�tage o� il est rendu et indique quand les portes s'ouvrent et que l'utilisateur est arriv� � destination.
// Auteur : Karine Moreau
// Date : 2020-09-24

#include <iostream>

using namespace std;				// Pour �viter de r�p�ter le std:: devant les instructions comme cout, cin, endl, ...

int main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables
	int etageArrivee;
    int etageDepart;

	cout << "Indiquez l'�tage � atteindre -->";
	cin >> etageArrivee;

	cout << "Vous �tes � l'�tage 1, vous montez dans l'ascenseur..." << endl;
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
        cout << "Vous �tes � l'�tage : " << numEtage << endl;
    }
    */

    if (etageArrivee % 2 == 0)
    {
        // D�claration et initialisation (=) de la variable de boucle (i)
        int i = 2;


        // On a bien la condition pour r�p�ter la boucle
        while (i <= etageArrivee)
        {
            cout << i <<endl;

            // La r�initialisation de la variable de boucle, il faut utiliser ++ ou l'op�rateur d'affectation i= ??
            i = i + 2;  // i+=2;
        }
    }
    else
    {
        // D�claration et initialisation (=) de la variable de boucle (i)
        int i = 3;


        // On a bien la condition pour r�p�ter la boucle
        while (i <= etageArrivee)
        {
            cout << i <<endl;

            // La r�initialisation de la variable de boucle, il faut utiliser ++ ou l'op�rateur d'affectation i= ??
            i = i + 2;  // i+=2;
        }

    }



	cout << "Vous �tes arriv�, les portes s'ouvrent ..." << endl;

	return 0;
}