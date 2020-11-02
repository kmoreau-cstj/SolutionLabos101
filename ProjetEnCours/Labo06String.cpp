// But :
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
#include <string>					// Biblioth�que offrant les fonctions sp�cifiques aux string

using namespace std;				// Pour �viter de r�p�ter le std:: devant les instructions comme cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");			// pour passer de Windows � DOS(console) car pas la m�me tableau ascii

	// D�claration des variables
	// Quels sont les types de base : bool, int, double, char, float, fournis par C++
	int nombre;
	int nb1, nb2, nb3;
	// Types complexes : compos�s de types de base. Objets
	// string : permet de stocker plusieurs caract�res cons�cutifs : plusieurs char
	string prenom;
	string adresse;
	string paragraphe;

	// Initialisation des variables = comment lui donner une valeur de d�part
	// Au moment de la d�claration de la variable, on peut passer une valeur au constructeur (fonction) pour initialiser la variable
	int entier(9);
	string salutation("Bonjour � tous !");		// on fait appel au constructeur, ici une seule op�ration
	
	nombre = 15;
	prenom = "Karine";							// ici on utilise l'op�rateur d'affectaction, n�cessite deux op�rations distinctes : d�claration + initialisation
	salutation = "Salut";
	// comment afficher un string � l'�cran
	cout << nombre << endl;
	cout << salutation << " et particuli�rement � " << prenom << endl;

	// Demander � l'utilisateur la valeur et la stocker dans une variable
	cout << "veuillez entrer un nombre entier : ";
	cin >> nombre;
	cin.ignore(1, '\n');
	cout << "Votre nombre est :" << nombre << endl;

	cout << "veuillez entrer 3 entiers : ";
	cin >> nb1 >> nb2 >> nb3;				// Les >> du cin mettent fin � la saisie si ils rencontrent des espaces, des tabulations ou des enter
	cin.ignore();							// ignore() sans param�tre enl�ve un caract�re dans la m�moire du clavier
	//cin.ignore(1, '\n');   
	cout << "voici vos nombres :" << nb1 << ", " << nb2 << ", " << nb3 << endl;



	cout << "Veuillez entrer votre pr�nom :";
	cin >> prenom;								// cin >> a la facheuse manie de laisser les enters dans la m�moire du clavier
	cin.ignore(1, '\n');   
	cout << "Vous vous appelez " << prenom << endl;

	cout << "Veuillez indiquer votre adresse : ";
	//cin >> adresse;				// ne fonctionne pas, ne tient pas compte de la pr�sence des espaces

	// Si on a besoin de m�moriser une chaine de caract�res contenant des espaces, on ne peut plus utiliser cin >>.
	// Est une fonction pour lire les string
	getline(cin, adresse, '\n');						// Pour symboliser la touche enter du clavier c'est \n, n pour new line
	cout << "Vous habitez au " << adresse << endl;			// ici le cin >> met fin � la saisie d�s qu'on tape un espace
	// ici on rencontre un probl�me, le getline ne nous laisse pas le temps de saisir l'adresse.
	// dans la m�moire du clavier, il reste un \n et donc le getline estime que sa job est finie, la variable adresse reste vide.

	// Pour solutionner, il faut vider la m�moire du clavier apr�s chaque utilisation de cin >> en utilisant cin.ignore()


	// comparaison des chaines de caract�res
	if (nombre == 7)
	{
		cout << "C'est aussi mon nombre pr�f�r� !" << endl;
	}

	if (prenom == "Karine")
	{
		cout << "vous �tes mon amie !" << endl;
	}
	else
		cout << "Je ne vous connais pas." << endl;

	if (prenom > "Arthur")
	{
		cout << prenom << " vient apr�s Arthur." << endl;
	}
	else
	{
		cout << prenom << " vient avant Arthur." << endl;
	}


	if (prenom < "Zo�")
	{
		cout << prenom << " vient avant Zo�." << endl;
	}
	else
	{
		cout << prenom << " vient apr�s Zo�." << endl;
	}

	cout << "Veuillez entrer �crire un po�me :";
	// Il va y avoir des espaces, donc il faut utiliser getline
	getline(cin, paragraphe, '\n');

	cout << " votre po�me :" << endl << paragraphe << endl;






	return 0;
}