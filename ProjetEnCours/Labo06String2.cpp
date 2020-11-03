// But :
// Auteur : Karine Moreau
// Date : 2020

#include <iostream>
#include <string>					// Biblioth�que offrant les fonctions sp�cifiques aux string : getline

using namespace std;				// Pour �viter de r�p�ter le std:: devant les instructions comme cout, cin, endl, ...


int main()
{
	setlocale(LC_ALL, "");			// pour passer de Windows � DOS(console) car pas la m�me tableau ascii

	// D�claration des variables
	string salutation("Bonjour � tous !");		// appel du constructeur avec un param�tre pour initialiser la variable
	string prenom;	
	string bienvenue;

	
	// Objet compos� de type de base : une s�rie de char

	// Initialisation des string
	prenom = "Pierrot";

	// M�me chose que pour les types de base : int, float, double, char, bool
	//cin >> prenom;
	//cout << prenom;
	if (prenom == "Karine")
	{

	}

	// La probl�matique avec les chaines de caract�res ce sont les espaces et le cin >> 
	// car le cin >> a comme s�parateur l'espace, la tabulation et le enter
	// Quand on veut saisir une chaine de caract�res contenant des espaces, il faut avoir recours � la fonction getline
	// Le cin >> laisse trainer dans la m�moire du clavier les s�parateurs (espace, tabulation, enter). Il faut faire le 
	// m�nage apr�s l'utilisation de chaque cin >> en utilisant la fonction cin.ignore(); ou cin.ignore(1, '\n');


	cout << "Nombre de lettres dans le pr�nom : " << prenom.length() << endl;
	cout << "Nombre de lettres dans salutation : " << salutation.length() << endl;

	cout << "Place occup�e en m�moire par prenom : " << prenom.size() << endl;
	cout << "Place occup�e en m�moire par salutation : " << salutation.size() << endl;

	cout << "Capacit� de prenom : " << prenom.capacity() << endl;
	cout << "Capacit� de salutation : " << salutation.capacity() << endl;

	cout << "Capacit� maximale de prenom : " << prenom.max_size() << endl;
	cout << "Capacit� maximale de salutation : " << salutation.max_size() << endl;

	cout << "Juste apr�s la d�claration" << endl;
	cout << "Nombre de lettres dans bienvenue : " << bienvenue.length() << endl;
	cout << "Capacit� de bienvenue : " << bienvenue.capacity() << endl;

	// Initialiser la variable bienvenue
	bienvenue = "Bienvenue";
	cout << "Juste apr�s l'initialisation" << endl;
	cout << "Nombre de lettres dans bienvenue : " << bienvenue.length() << endl;
	cout << "Capacit� de bienvenue : " << bienvenue.capacity() << endl;

	// pour ajouter des caract�res � la fin d'une chaine, on utilise l'op�rateur + et cela s'appelle concat�ner

	bienvenue = bienvenue + " � toi";
	cout << "Juste apr�s la concat�nation" << endl;
	cout << "Nombre de lettres dans bienvenue : " << bienvenue.length() << endl;
	cout << "Capacit� de bienvenue : " << bienvenue.capacity() << endl;

	bienvenue = bienvenue + " et � tous les autres !";
	cout << "Juste apr�s la deuxi�me concat�nation" << endl;
	cout << "Nombre de lettres dans bienvenue : " << bienvenue.length() << endl;
	cout << "Capacit� de bienvenue : " << bienvenue.capacity() << endl;

	// On va effacer le contenu de la variable ou une partie de la variable
	bienvenue.erase(10, 10);
	cout << "Juste apr�s erase : " << bienvenue << endl;
	cout << "Nombre de lettres dans bienvenue : " << bienvenue.length() << endl;
	cout << "Capacit� de bienvenue : " << bienvenue.capacity() << endl;

	// On nettoie tout le contenu de la variable
	bienvenue = "Salut";
	bienvenue.clear();
	cout << "Juste apr�s clear" << endl;
	cout << "Nombre de lettres dans bienvenue : " << bienvenue.length() << endl;
	cout << "Capacit� de bienvenue : " << bienvenue.capacity() << endl;

	// Est-ce que la chaine est vide
	if (bienvenue.empty())
	{
		cout << "La chaine est vide" << endl;
	}

	bienvenue = "Salut !";

	cout << "Le premier caract�re de bienvenue avec at : " << bienvenue.at(0) <<endl;
	// bienvenue.begin();
	cout << "Le premier caract�re de bienvenue avec front : " << bienvenue.front() <<endl;
	cout << "Le dernier caract�re de bienvenue avec at : " << bienvenue.at(bienvenue.length()-1) << endl;
	// bienvenue.end();
	cout << "Le dernier caract�re de bienvenue avec back: " << bienvenue.back()<<endl;
	cout << "Le troisi�me caract�re de bienvenue : " << bienvenue.at(2) << endl;
	cout << "Le troisi�me caract�re de bienvenue avec les []: " << bienvenue[2];

	// Afficher les lettres de la variable bienvenue et fa�on verticale
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