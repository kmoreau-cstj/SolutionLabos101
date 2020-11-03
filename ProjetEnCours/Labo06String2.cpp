// But :
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
#include <string>					// Bibliothèque offrant les fonctions spécifiques aux string : getline

using namespace std;				// Pour éviter de répéter le std:: devant les instructions comme cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");			// pour passer de Windows à DOS(console) car pas la même tableau ascii

	// Déclaration des variables
	string salutation("Bonjour à tous !");		// appel du constructeur avec un paramètre pour initialiser la variable
	string prenom;	
	string bienvenue;

	
	// Objet composé de type de base : une série de char

	// Initialisation des string
	prenom = "Pierrot";

	// Même chose que pour les types de base : int, float, double, char, bool
	//cin >> prenom;
	//cout << prenom;
	if (prenom == "Karine")
	{

	}

	// La problématique avec les chaines de caractères ce sont les espaces et le cin >> 
	// car le cin >> a comme séparateur l'espace, la tabulation et le enter
	// Quand on veut saisir une chaine de caractères contenant des espaces, il faut avoir recours à la fonction getline
	// Le cin >> laisse trainer dans la mémoire du clavier les séparateurs (espace, tabulation, enter). Il faut faire le 
	// ménage après l'utilisation de chaque cin >> en utilisant la fonction cin.ignore(); ou cin.ignore(1, '\n');


	cout << "Nombre de lettres dans le prénom : " << prenom.length() << endl;
	cout << "Nombre de lettres dans salutation : " << salutation.length() << endl;

	cout << "Place occupée en mémoire par prenom : " << prenom.size() << endl;
	cout << "Place occupée en mémoire par salutation : " << salutation.size() << endl;

	cout << "Capacité de prenom : " << prenom.capacity() << endl;
	cout << "Capacité de salutation : " << salutation.capacity() << endl;

	cout << "Capacité maximale de prenom : " << prenom.max_size() << endl;
	cout << "Capacité maximale de salutation : " << salutation.max_size() << endl;

	cout << "Juste après la déclaration" << endl;
	cout << "Nombre de lettres dans bienvenue : " << bienvenue.length() << endl;
	cout << "Capacité de bienvenue : " << bienvenue.capacity() << endl;

	// Initialiser la variable bienvenue
	bienvenue = "Bienvenue";
	cout << "Juste après l'initialisation" << endl;
	cout << "Nombre de lettres dans bienvenue : " << bienvenue.length() << endl;
	cout << "Capacité de bienvenue : " << bienvenue.capacity() << endl;

	// pour ajouter des caractères à la fin d'une chaine, on utilise l'opérateur + et cela s'appelle concaténer

	bienvenue = bienvenue + " à toi";
	cout << "Juste après la concaténation" << endl;
	cout << "Nombre de lettres dans bienvenue : " << bienvenue.length() << endl;
	cout << "Capacité de bienvenue : " << bienvenue.capacity() << endl;

	bienvenue = bienvenue + " et à tous les autres !";
	cout << "Juste après la deuxième concaténation" << endl;
	cout << "Nombre de lettres dans bienvenue : " << bienvenue.length() << endl;
	cout << "Capacité de bienvenue : " << bienvenue.capacity() << endl;

	// On va effacer le contenu de la variable ou une partie de la variable
	bienvenue.erase(10, 10);
	cout << "Juste après erase : " << bienvenue << endl;
	cout << "Nombre de lettres dans bienvenue : " << bienvenue.length() << endl;
	cout << "Capacité de bienvenue : " << bienvenue.capacity() << endl;

	// On nettoie tout le contenu de la variable
	bienvenue = "Salut";
	bienvenue.clear();
	cout << "Juste après clear" << endl;
	cout << "Nombre de lettres dans bienvenue : " << bienvenue.length() << endl;
	cout << "Capacité de bienvenue : " << bienvenue.capacity() << endl;

	// Est-ce que la chaine est vide
	if (bienvenue.empty())
	{
		cout << "La chaine est vide" << endl;
	}

	bienvenue = "Salut !";

	cout << "Le premier caractère de bienvenue avec at : " << bienvenue.at(0) <<endl;
	// bienvenue.begin();
	cout << "Le premier caractère de bienvenue avec front : " << bienvenue.front() <<endl;
	cout << "Le dernier caractère de bienvenue avec at : " << bienvenue.at(bienvenue.length()-1) << endl;
	// bienvenue.end();
	cout << "Le dernier caractère de bienvenue avec back: " << bienvenue.back()<<endl;
	cout << "Le troisième caractère de bienvenue : " << bienvenue.at(2) << endl;
	cout << "Le troisième caractère de bienvenue avec les []: " << bienvenue[2];

	// Afficher les lettres de la variable bienvenue et façon verticale
	/*
	S
	a
	l
	u
	t
	 
	!
	*/

	cout << "avec at :" << endl;
	for (int position = 0; position < bienvenue.length(); position++)
	{
		cout << bienvenue.at(position) << endl;
	}

	cout << "avec [] :" << endl;
	for (int position = 0; position < bienvenue.length(); position++)
	{
		cout << bienvenue[position] << endl;
	}






	return 0;
}