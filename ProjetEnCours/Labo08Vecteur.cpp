// But : Explorer la notion de vecteur en C++
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
#include <vector>

using namespace std;				// Pour �viter de r�p�ter le std:: devant les instructions comme cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables
	vector<int> vecDeNombre(8);				// Cr�e une suite de int en m�moire. 
											// Il y a 8 espaces m�moires cons�cutifs de r�server pour y stocker 8 entiers
											// et chaque case ou �l�ment est initialis� � 0.
	vector<float> vecDeReel(15);
	vector<char> vecDeCaractere(25);
	vector<string> vecDePrenom(24);
	vector<double> vecDeNote;				// Il n'y a pas de m�moire r�serv�e pour le moment. Elle le sera au fur et � mesure

	int nbElement = 10;
	double note;


	// Initialiser les vecteurs
	vector<int> VecEntiers(nbElement,15);		// Appel du constructeur : le premier param�tre indique le nombre d'�l�ment et
												// le deuxi�me la valeur avec laquelle chaque �l�ment est initialis�e
	vector<float> VecDeFloat{ 0.5,11.5,22.75,8.95,5.125,9.65 };		// Cr�e une serie de 6 cases de type float et met la valeur
																	// dans chacune des cases

	vector<char> vecDeVoyelle{'a', 'e', 'i', 'o', 'u', 'y' };


	// Afficher le contenu du vecteur � l'aide d'une boucle for
	cout << "Contenu du vecteur vecDeVoyelle : " << endl;
	for (int i = 0; i < vecDeVoyelle.size(); i++)
	{
		cout << vecDeVoyelle.at(i) << endl;		// at permet d'acc�der au contenu d'un �l�ment dont on pr�cise la position qui 
												// qui commence toujours � 0
	}

	cout << "Contenu du vecteur vecDeNote :" << endl;
	if (vecDeNote.empty())
		cout << "Le vecteur est vide" << endl;
	else
		for (int i = 0; i < vecDeNote.size(); i++)
		{
			cout << vecDeNote.at(i) << endl;
		}


	cout << "Contenu du vecteur vecDeNombre : " << endl;
	for (int i = 0; i < vecDeNombre.size(); i++)
	{
		cout << "�l�ment #" << i << " : " << vecDeNombre.at(i) << endl;
	}

	// Comment mettre des valeurs dans un vecteur
	// Demander � l'utilisateur combien de notes il veut entrer
	cout << "Veuillez indiquer le nombre de notes :";
	cin >> nbElement;

	for (int i = 0; i < nbElement; i++)
	{
		cout << "Note de l'�tudiant #" << i + 1 << " : ";
		cin >> note;
		// Il faut mettre la note dans le vecteur. L'�l�ment est ajout� � la fin du vecteur
		vecDeNote.push_back(note);
	}


	cout << "Contenu du vecteur vecDeNote :" << endl;
	for (int i = 0; i < vecDeNote.size(); i++)
	{
		cout << "Note #" << i + 1 << " : " << vecDeNote.at(i) << endl;
	}


	// Attention, push_back ajoute toujours � la fin, m�me s'il y a des cases vides
	// Si on veut changer la valeur de case d�j� existantes, il faut utiliser at.

	cout << "Modifier les valeurs de vecDeNombre :" << endl;

	for (int  i = 0; i < vecDeNombre.size(); i++)
	{
		cout << "Veuillez entrer un entier :";
		cin >> vecDeNombre.at(i);
	}


	// Afficher le contenu de vecDeNombre
	cout << "Contenu du vecteur vecDeNombre : " << endl;
	for (int i = 0; i < vecDeNombre.size(); i++)
	{
		cout << "�l�ment #" << i << " : " << vecDeNombre.at(i) << endl;
	}



	return 0;
}