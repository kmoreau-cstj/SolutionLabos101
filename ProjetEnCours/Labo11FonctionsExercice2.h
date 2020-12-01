#pragma once


// La liste des includes
#include <iostream>
#include <string>					// stoi, getline, ...
#include <fstream>
#include <iomanip>
#include "Labo11Fonctions.h"

using namespace std;


// La liste des constantes
const char BORD_HORIZONTAL = '-';
const char BORD_VERTICAL = '|';

// La liste des structures

// Renault;Paul;125, rue des Lilas;St-Jérôme;J7Z 2G4;QC;12-05-1990;30;450-436-8512;514-705-8745;450-435-6958;PaulRe@hotmail.com;
struct Contact
{
	string nomContact;
	string prenomContact;
	string adresseContact;
	string villeContact;
	string codePostalContact;
	string provinceContact;
	string dateNaissance;
	int age;
	string numTelContact1;
	string numTelContact2;
	string numTelContact3;
	string courrielContact;
};




// La liste des prototypes de fonctions
void lireEnregistrement(ifstream& canal, Contact& contactALire);

