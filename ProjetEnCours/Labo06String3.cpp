// But : Demander � l'utilisateur un nombre entier et v�rifier qu'il se trouve bien entre 1 et 10.
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
#include <string>					// Biblioth�que offrant les fonctions sp�cifiques aux string : getline

using namespace std;				// Pour �viter de r�p�ter le std:: devant les instructions comme cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");			// pour passer de Windows � DOS(console) car pas la m�me table ascii

	// D�claration des constantes
	const int MIN = 1;
	const int MAX = 10;

	// D�claration des variables
	int nombre;

	cout << "Veuillez entrer un nombre entier : ";
	cin >> nombre;

	while (nombre < MIN || nombre > MAX)
	{
		cout << "Erreur : Le nombre doit �tre compris entre " << MIN << " et " << MAX << "." << endl;
		cout << "Veuillez entrer un nombre entier : ";
		cin >> nombre;
	}

	cout << "votre nombre est : " << nombre << endl;

	return 0;
}