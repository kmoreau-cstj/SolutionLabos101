// But :
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
#include <string>					// Bibliothèque offrant les fonctions spécifiques aux string

using namespace std;				// Pour éviter de répéter le std:: devant les instructions comme cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");			// pour passer de Windows à DOS(console) car pas la même tableau ascii

	// Déclaration des variables
	// Quels sont les types de base : bool, int, double, char, float, fournis par C++
	int nombre;
	int nb1, nb2, nb3;
	// Types complexes : composés de types de base. Objets
	// string : permet de stocker plusieurs caractères consécutifs : plusieurs char
	string prenom;
	string adresse;
	string paragraphe;

	// Initialisation des variables = comment lui donner une valeur de départ
	// Au moment de la déclaration de la variable, on peut passer une valeur au constructeur (fonction) pour initialiser la variable
	int entier(9);
	string salutation("Bonjour à tous !");		// on fait appel au constructeur, ici une seule opération
	
	nombre = 15;
	prenom = "Karine";							// ici on utilise l'opérateur d'affectaction, nécessite deux opérations distinctes : déclaration + initialisation
	salutation = "Salut";
	// comment afficher un string à l'écran
	cout << nombre << endl;
	cout << salutation << " et particulièrement à " << prenom << endl;

	// Demander à l'utilisateur la valeur et la stocker dans une variable
	cout << "veuillez entrer un nombre entier : ";
	cin >> nombre;
	cin.ignore(1, '\n');
	cout << "Votre nombre est :" << nombre << endl;

	cout << "veuillez entrer 3 entiers : ";
	cin >> nb1 >> nb2 >> nb3;				// Les >> du cin mettent fin à la saisie si ils rencontrent des espaces, des tabulations ou des enter
	cin.ignore();							// ignore() sans paramètre enlève un caractère dans la mémoire du clavier
	//cin.ignore(1, '\n');   
	cout << "voici vos nombres :" << nb1 << ", " << nb2 << ", " << nb3 << endl;



	cout << "Veuillez entrer votre prénom :";
	cin >> prenom;								// cin >> a la facheuse manie de laisser les enters dans la mémoire du clavier
	cin.ignore(1, '\n');   
	cout << "Vous vous appelez " << prenom << endl;

	cout << "Veuillez indiquer votre adresse : ";
	//cin >> adresse;				// ne fonctionne pas, ne tient pas compte de la présence des espaces

	// Si on a besoin de mémoriser une chaine de caractères contenant des espaces, on ne peut plus utiliser cin >>.
	// Est une fonction pour lire les string
	getline(cin, adresse, '\n');						// Pour symboliser la touche enter du clavier c'est \n, n pour new line
	cout << "Vous habitez au " << adresse << endl;			// ici le cin >> met fin à la saisie dès qu'on tape un espace
	// ici on rencontre un problème, le getline ne nous laisse pas le temps de saisir l'adresse.
	// dans la mémoire du clavier, il reste un \n et donc le getline estime que sa job est finie, la variable adresse reste vide.

	// Pour solutionner, il faut vider la mémoire du clavier après chaque utilisation de cin >> en utilisant cin.ignore()


	// comparaison des chaines de caractères
	if (nombre == 7)
	{
		cout << "C'est aussi mon nombre préféré !" << endl;
	}

	if (prenom == "Karine")
	{
		cout << "vous êtes mon amie !" << endl;
	}
	else
		cout << "Je ne vous connais pas." << endl;

	if (prenom > "Arthur")
	{
		cout << prenom << " vient après Arthur." << endl;
	}
	else
	{
		cout << prenom << " vient avant Arthur." << endl;
	}


	if (prenom < "Zoé")
	{
		cout << prenom << " vient avant Zoé." << endl;
	}
	else
	{
		cout << prenom << " vient après Zoé." << endl;
	}

	cout << "Veuillez entrer écrire un poème :";
	// Il va y avoir des espaces, donc il faut utiliser getline
	getline(cin, paragraphe, '\n');

	cout << " votre poème :" << endl << paragraphe << endl;






	return 0;
}