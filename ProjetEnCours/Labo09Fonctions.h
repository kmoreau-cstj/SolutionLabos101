// But : Cr�er des fonctions qui prennent des param�tres par r�f�rence
// Auteur : Karine Moreau
// Date : 2020-11-12

#pragma once
#include <vector>

using namespace std;


void echangerValeur(int& nb1, int& nb2);		// & pour dire que le param�tre est pass� par r�f�rence

void afficherContenuVecteur(vector<int> vec);

void ajouterValeurALaFinDuVecteur(vector<int>& vec, int nbElement);