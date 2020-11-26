#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;


struct section
{
	string nomChapitre;
	int numeroPage;



};


// Liste des prototypes des fonctions

// Tous les paramètres de type ifstream ou ofstream doivent être IMPÉRATIVEMENT passés par RÉFÉRENCE donc avec une perluète &
void ouvrirFichierEnLecture(const string NOM_FICHIER, ifstream& canal);
void creerFichierEnEcriture(const string NOM_FICHIER, ofstream& canal);