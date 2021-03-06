// But : L'utilisateur souhaite prendre l'ascenseur. il indique l'�tage o� il se trouve. On lui demande quel �tage il veut atteindre.
// L'ascenseur peut monter ou bien descendre

// Le programme affiche l'�tage o� il est rendu et indique quand les portes s'ouvrent et que l'utilisateur est arriv� � destination.
// Auteur : Karine Moreau
// Date : 2020-09-24

#include <iostream>
#include <Windows.h>				// Pour l'instruction Sleep

using namespace std;				// Pour �viter de r�p�ter le std:: devant les instructions comme cout, cin, endl, ...

int main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables
	int etageArrivee;
    int etageDepart;
	int numEtage;

    cout << "Indiquez l'�tage de d�part -->";
    cin >> etageDepart;


	cout << "Indiquez l'�tage � atteindre -->";
	cin >> etageArrivee;

	cout << "Vous �tes � l'�tage " << etageDepart<< ", vous montez dans l'ascenseur..." << endl;

	if (etageDepart <= etageArrivee)
	{
		numEtage = etageDepart;
		while (numEtage <= etageArrivee)
		{
			Sleep(1000);
			cout << "Vous �tes � l'�tage : " << numEtage << endl;
			numEtage++;
		}
	}
	else
	{
		numEtage = etageDepart;
		while (numEtage >= etageArrivee)
		{
			Sleep(1000); 
			cout << "Vous �tes � l'�tage : " << numEtage << endl;
			numEtage--;
		}
	}
   
 

	cout << "Vous �tes arriv�, les portes s'ouvrent ..." << endl;

	return 0;
}