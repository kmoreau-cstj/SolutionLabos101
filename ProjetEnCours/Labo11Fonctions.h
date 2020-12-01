#pragma once

// Liste des include
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;


// Liste des constantes pour qu'elles soient disponibles partout dans les programmes qui utilisent cette librairie
const string TITRE = "Table des matieres";
const string TYPE_SECTION = "Chapitre";
const string SEPARATEUR_SECTION = " : ";
const char POINTE_DE_SUITE = '.';
//Chapitre 1  : Introduction au C++.................................................1
const int COL1 = TYPE_SECTION.length() + 1;	// La colonne est de longueur la longueur de la section + un espace pour d�coler 
											// de l'information suivante
const int COL2 = 2;						    // on permet 2 chiffres pour le num�ro de la section donc un livre
											// pourrait avoir au maximum 99 chapitres
const int COL3 = SEPARATEUR_SECTION.length();
const int COL4 = 60;						// On permet 60 caract�res pour afficher le titre qui sera compl�t� par des points de suite
const int COL5 = 5;							// On permet qu'un libre ait plus de 10 000 pages. 
											// On compl�tera l'espace par les points de suite et on alignera � droite
const int LARGEUR_PAGE = COL1 + COL2 + COL3 + COL4 + COL5;



// Liste des structures 
struct section
{
	string nomChapitre;
	int numeroPage;
};


// Liste des prototypes des fonctions
// Tous les param�tres de type ifstream ou ofstream doivent �tre  pass�s par R�F�RENCE donc avec une perlu�te &
void ouvrirFichierEnLecture(const string NOM_FICHIER, ifstream& canal);
void creerFichierEnEcriture(const string NOM_FICHIER, ofstream& canal);


// On passe la section en r�f�rence car on veut pouvoir modifier les valeurs de ce param�tre (nom du chapire et num�ro de la page)
void lireEnregistrement(ifstream& canal, section& sectionALire);
section lireEnregistrement(ifstream& canal);

void ecrireEnTete(ofstream& canal, const string TITRE, int nbLigneApresTitre);

// Ici on ne modifie pas la section, donc on a besoin juste en lecture donc par copie suffit, pas de r�f�rence , pas de &
void ecrireEnregistrement(ofstream& canal, section sectionAEcrire, int numeroChapitre);