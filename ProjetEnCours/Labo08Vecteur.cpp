// But : Explorer la notion de vecteur en C++
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
#include <vector>

using namespace std;				// Pour éviter de répéter le std:: devant les instructions comme cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables
	vector<int> vecDeNombre(8);				// Crée une suite de int en mémoire. 
											// Il y a 8 espaces mémoires consécutifs de réserver pour y stocker 8 entiers
											// et chaque case ou élément est initialisé à 0.
	vector<float> vecDeReel(15);
	vector<char> vecDeCaractere(25);
	vector<string> vecDePrenom(24);
	vector<double> vecDeNote;				// Il n'y a pas de mémoire réservée pour le moment. Elle le sera au fur et à mesure

	int nbElement = 10;
	double note;


	// Initialiser les vecteurs
	vector<int> VecEntiers(nbElement,15);		// Appel du constructeur : le premier paramètre indique le nombre d'élément et
												// le deuxième la valeur avec laquelle chaque élément est initialisée
	vector<float> VecDeFloat{ 0.5,11.5,22.75,8.95,5.125,9.65 };		// Crée une serie de 6 cases de type float et met la valeur
																	// dans chacune des cases

	vector<char> vecDeVoyelle{'a', 'e', 'i', 'o', 'u', 'y' };


	// Afficher le contenu du vecteur à l'aide d'une boucle for
	cout << "Contenu du vecteur vecDeVoyelle : " << endl;
	for (int i = 0; i < vecDeVoyelle.size(); i++)
	{
		cout << vecDeVoyelle.at(i) << endl;		// at permet d'accéder au contenu d'un élément dont on précise la position qui 
												// qui commence toujours à 0
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
		cout << "Élément #" << i << " : " << vecDeNombre.at(i) << endl;
	}

	// Comment mettre des valeurs dans un vecteur
	// Demander à l'utilisateur combien de notes il veut entrer
	cout << "Veuillez indiquer le nombre de notes :";
	cin >> nbElement;

	for (int i = 0; i < nbElement; i++)
	{
		cout << "Note de l'étudiant #" << i + 1 << " : ";
		cin >> note;
		// Il faut mettre la note dans le vecteur. L'élément est ajouté à la fin du vecteur
		vecDeNote.push_back(note);
	}


	cout << "Contenu du vecteur vecDeNote :" << endl;
	for (int i = 0; i < vecDeNote.size(); i++)
	{
		cout << "Note #" << i + 1 << " : " << vecDeNote.at(i) << endl;
	}


	// Attention, push_back ajoute toujours à la fin, même s'il y a des cases vides
	// Si on veut changer la valeur de case déjà existantes, il faut utiliser at.

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
		cout << "Élément #" << i << " : " << vecDeNombre.at(i) << endl;
	}



	return 0;
}