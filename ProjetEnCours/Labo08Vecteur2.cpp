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
	vector<int> vec{ 12,0,42,0,0,68,0,-15,89,0,0,0,13,27,52,2,0,7,0,0 };
	int nbZero = 0;

	/*
	1.	Afficher la taille du vecteur.*/
	cout << "Taille du vecteur :" << vec.size() << endl;



	// 2.	Afficher le contenu de la premi�re case si le vecteur n'est pas vide
	if (vec.empty())
		cout << "Le vecteur est vide" << endl;
	else
	{
		cout << "Contenu de la premi�re case :" << vec.front() << endl;
		cout << "Autre fa�on d'afficher le contenu de la premi�re case :" << vec.at(0) << endl;

		// 3.	Afficher le contenu de la derni�re case.
		cout << "Contenu de la derni�re case :" << vec.at(vec.size()-1)  << endl; 
		// size() -1 car on commence � 0 pour le num�ro de la premi�re case
		cout << "Autre fa�on d'afficher le contenu de la derni�re case :" << vec.back() << endl;

	}
	// 4.	Afficher le nombre de cases qui contiennent une valeur nulle.
	// Il faut parcourir toutes les cases du vecteur et tester leur contenu
	for (int i = 0; i < vec.size(); i++)
	{
		// V�rifier si le contenu (at) a la valeur 0
		if (vec.at(i) == 0)
			nbZero++;

	}

	cout << "Le nombre de cases qui ont la valeur 0 : " << nbZero <<endl;
	
	
	
	// 5.	Afficher le num�ro de la case et son contenu sous la forme vec[#]= Valeur.


	// 6.	Afficher les cases du vecteur dont le contenu est pair.


	// 7.	Afficher le vecteur en commen�ant par la fin.


	// 8.	Afficher dans un premier temps uniquement les cases d'indice pair et dans un deuxi�me temps les cases d'indice impair.

	


	return 0;
}