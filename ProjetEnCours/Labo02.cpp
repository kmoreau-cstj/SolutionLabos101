// But : Additionner deux nombres et afficher le résultat à l'écran
// Auteur : Karine Moreau
// Date : 2020-09-08

#include <iostream>				// Inclure le coffre à outils pour communiquer avec l'utilisateur


int main()
{
	// Pour afficher correctement les accents
	setlocale(LC_ALL, "");
	
	// Quand le programme doit mémoriser des valeurs, le programmeur doit déclarer des variables
	// Une variable est un emplacement dans la mémoire vive où on peut stocker une valeur qui peut changer
	// Pour déclarer une variable, il faut indiquer deux informations : 
	// 1. le type de valeur à mémoriser : 
	//          entier = int : 12 : place en mémoire 4 octets
	//          réel, un nombre décimal, à virgule  = float (flottant, la virgule peut bouger) : 10.99 : 4 octets
	//                                                double (très gros nombre,qui contient plus de 302 chiffres) : 8 octets
	//          caractère (une seule lettre) = char (character) : 'A', 'y', '0' : 1 octet
	//          texte (chaine de caractères) = string (chaine) : "bonjour à tous" : 32 octets
	//          OuiNon (booléen) = bool : true ou false : 1 octet
	// 2. le nom que l'on donne à la variable pour se souvenir de son emplacement :
	//          Le nom est choisi par le programmeur : le nom ne peut pas commencer par un chiffre
	//												   le nom ne peut pas contenir d'espace
	//          Règle du professeur : Le nom commence toujours par une minuscule
	//								  et le deuxième mot par une majusucule et pas de _
	//								  Pas de caractère accentué

	// Pour additionner deux nombres entiers, il faut deux variables
	// Déclarer deux variables
	int nombre1;
	int nombre2; // = 2;
	// Déclarer la variable pour mémoriser le résultat de la somme
	int somme;



	// int entier1, entier2;
	/* Exemples de déclarations de variable de différents types
	char lettre;
	string message;
	double reel;
	float reel2;
	bool quitterProgramme;
	*/

	// Initialiser la variable avec avec un nombre. 
	// On utilise le signe = pour mettre une valeur dans la partie gauche du signe

	//nombre1 = 10;		// nombre1 reçoit la valeur 10 : nombre1 <- 10, 10 va dans nombre1
						// un signe = en C++ veut dire affecter la valeur à droite dans la variable à gauche
	// 10 = nombre1;	// pas cohérent en C++ : il faut que la partie gauche du = soit le nom d'une variable

	// On peut combiner la déclaration et l'initialisation dans la même instruction
	//int nombre3 = 15;

	// On va demander à l'utilisateur de fournir les valeurs des deux nombres
	std::cout << "Veuillez entrer un nombre entier : ";
	// L'utilisateur va taper la valeur au clavier et le programme doit mémoriser la valeur dans nombre1
	std::cin >> nombre1;

	// On vérifie qu'on a bien la valeur tapée par l'utilisateur
	// std::cout << "Dans nombre1, il y a " << nombre1 << ".";

	// On demande le deuxième nombre
	std::cout << "Veuillez entrer un deuxième nombre entier :";
	// On lit la valeur tapée au clavier et on la stocke dans la variable nombre2
	std::cin >> nombre2;


	// Le programme doit additionner les deux nombres et il doit s'en souvenir
	somme = nombre1 + nombre2;
	// Le programme additionne nombre1 + nombre2 et met le résultat dans la variable somme
	// somme <- l'addition de nombre1 et nombre2

	// On doit afficher le résultat à l'écran pour informer l'utilisateur
	std::cout << "La somme de " << nombre1 << " + " << nombre2 << " = " << somme;

	return 0;

}