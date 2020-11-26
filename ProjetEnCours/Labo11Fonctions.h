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

// Tous les param�tres de type ifstream ou ofstream doivent �tre IMP�RATIVEMENT pass�s par R�F�RENCE donc avec une perlu�te &
void ouvrirFichierEnLecture(const string NOM_FICHIER, ifstream& canal);
void creerFichierEnEcriture(const string NOM_FICHIER, ofstream& canal);