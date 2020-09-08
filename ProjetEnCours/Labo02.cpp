// But : Additionner deux nombres et afficher le r�sultat � l'�cran
// Auteur : Karine Moreau
// Date : 2020-09-08

#include <iostream>				// Inclure le coffre � outils pour communiquer avec l'utilisateur


int main()
{
	// Pour afficher correctement les accents
	setlocale(LC_ALL, "");
	
	// Quand le programme doit m�moriser des valeurs, le programmeur doit d�clarer des variables
	// Une variable est un emplacement dans la m�moire vive o� on peut stocker une valeur qui peut changer
	// Pour d�clarer une variable, il faut indiquer deux informations : 
	// 1. le type de valeur � m�moriser : 
	//          entier = int : 12 : place en m�moire 4 octets
	//          r�el, un nombre d�cimal, � virgule  = float (flottant, la virgule peut bouger) : 10.99 : 4 octets
	//                                                double (tr�s gros nombre,qui contient plus de 302 chiffres) : 8 octets
	//          caract�re (une seule lettre) = char (character) : 'A', 'y', '0' : 1 octet
	//          texte (chaine de caract�res) = string (chaine) : "bonjour � tous" : 32 octets
	//          OuiNon (bool�en) = bool : true ou false : 1 octet
	// 2. le nom que l'on donne � la variable pour se souvenir de son emplacement :
	//          Le nom est choisi par le programmeur : le nom ne peut pas commencer par un chiffre
	//												   le nom ne peut pas contenir d'espace
	//          R�gle du professeur : Le nom commence toujours par une minuscule
	//								  et le deuxi�me mot par une majusucule et pas de _
	//								  Pas de caract�re accentu�

	// Pour additionner deux nombres entiers, il faut deux variables
	// D�clarer deux variables
	int nombre1;
	int nombre2; // = 2;
	// D�clarer la variable pour m�moriser le r�sultat de la somme
	int somme;



	// int entier1, entier2;
	/* Exemples de d�clarations de variable de diff�rents types
	char lettre;
	string message;
	double reel;
	float reel2;
	bool quitterProgramme;
	*/

	// Initialiser la variable avec avec un nombre. 
	// On utilise le signe = pour mettre une valeur dans la partie gauche du signe

	//nombre1 = 10;		// nombre1 re�oit la valeur 10 : nombre1 <- 10, 10 va dans nombre1
						// un signe = en C++ veut dire affecter la valeur � droite dans la variable � gauche
	// 10 = nombre1;	// pas coh�rent en C++ : il faut que la partie gauche du = soit le nom d'une variable

	// On peut combiner la d�claration et l'initialisation dans la m�me instruction
	//int nombre3 = 15;

	// On va demander � l'utilisateur de fournir les valeurs des deux nombres
	std::cout << "Veuillez entrer un nombre entier : ";
	// L'utilisateur va taper la valeur au clavier et le programme doit m�moriser la valeur dans nombre1
	std::cin >> nombre1;

	// On v�rifie qu'on a bien la valeur tap�e par l'utilisateur
	// std::cout << "Dans nombre1, il y a " << nombre1 << ".";

	// On demande le deuxi�me nombre
	std::cout << "Veuillez entrer un deuxi�me nombre entier :";
	// On lit la valeur tap�e au clavier et on la stocke dans la variable nombre2
	std::cin >> nombre2;


	// Le programme doit additionner les deux nombres et il doit s'en souvenir
	somme = nombre1 + nombre2;
	// Le programme additionne nombre1 + nombre2 et met le r�sultat dans la variable somme
	// somme <- l'addition de nombre1 et nombre2

	// On doit afficher le r�sultat � l'�cran pour informer l'utilisateur
	std::cout << "La somme de " << nombre1 << " + " << nombre2 << " = " << somme;

	return 0;

}