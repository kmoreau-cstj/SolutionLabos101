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
	vector<int> vec{ 12,0,42,0,0,68,0,-15,89,0,0,0,13,27,52,2,0,7,0,0 };
	int nbZero = 0;

	/*
	1.	Afficher la taille du vecteur.*/
	cout << "Taille du vecteur :" << vec.size() << endl;



	// 2.	Afficher le contenu de la première case si le vecteur n'est pas vide
	if (vec.empty())
		cout << "Le vecteur est vide" << endl;
	else
	{
		cout << "Contenu de la première case :" << vec.front() << endl;
		cout << "Autre façon d'afficher le contenu de la première case :" << vec.at(0) << endl;

		// 3.	Afficher le contenu de la dernière case.
		cout << "Contenu de la dernière case :" << vec.at(vec.size()-1)  << endl; 
		// size() -1 car on commence à 0 pour le numéro de la première case
		cout << "Autre façon d'afficher le contenu de la dernière case :" << vec.back() << endl;

	}
	// 4.	Afficher le nombre de cases qui contiennent une valeur nulle.
	// Il faut parcourir toutes les cases du vecteur et tester leur contenu
	for (int i = 0; i < vec.size(); i++)
	{
		// Vérifier si le contenu (at) a la valeur 0
		if (vec.at(i) == 0)
			nbZero++;

	}

	cout << "Le nombre de cases qui ont la valeur 0 : " << nbZero <<endl;
	
	
	
	// 5.	Afficher le numéro de la case et son contenu sous la forme vec[#]= Valeur.


	// 6.	Afficher les cases du vecteur dont le contenu est pair.


	// 7.	Afficher le vecteur en commençant par la fin.


	// 8.	Afficher dans un premier temps uniquement les cases d'indice pair et dans un deuxième temps les cases d'indice impair.

	


	return 0;
}