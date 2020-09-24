// But : L'utilisateur souhaite prendre l'ascenseur. il indique l'étage où il se trouve. On lui demande quel étage il veut atteindre.
// L'ascenseur peut monter ou bien descendre

// Le programme affiche l'étage où il est rendu et indique quand les portes s'ouvrent et que l'utilisateur est arrivé à destination.
// Auteur : Karine Moreau
// Date : 2020-09-24

#include <iostream>
#include <Windows.h>

using namespace std;				// Pour éviter de répéter le std:: devant les instructions comme cout, cin, endl, ...

int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables
	int etageArrivee;
    int etageDepart;

    cout << "Indiquez l'étage de départ -->";
    cin >> etageDepart;


	cout << "Indiquez l'étage à atteindre -->";
	cin >> etageArrivee;

	cout << "Vous êtes à l'étage " << etageDepart<< ", vous montez dans l'ascenseur..." << endl;

	if (etageDepart <= etageArrivee)
	{
		for (int numEtage = etageDepart; numEtage <= etageArrivee; numEtage++)
		{
			Sleep(1000);
			cout << "Vous êtes à l'étage : " << numEtage << endl;
		}
	}
	else
	{
		for (int numEtage = etageDepart; numEtage >= etageArrivee; numEtage--)
		{
			cout << "Vous êtes à l'étage : " << numEtage << endl;
		}
	}
   
 

	cout << "Vous êtes arrivé, les portes s'ouvrent ..." << endl;

	return 0;
}