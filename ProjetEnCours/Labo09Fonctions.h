// But : Créer des fonctions qui prennent des paramètres par référence
// Auteur : Karine Moreau
// Date : 2020-11-12

#pragma once
#include <vector>

using namespace std;


void echangerValeur(int& nb1, int& nb2);		// & pour dire que le paramètre est passé par référence

void afficherContenuVecteur(vector<int> vec);

void ajouterValeurALaFinDuVecteur(vector<int>& vec, int nbElement);