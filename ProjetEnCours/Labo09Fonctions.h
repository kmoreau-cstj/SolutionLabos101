// But : Créer des fonctions qui prennent des paramètres par référence
// Auteur : Karine Moreau
// Date : 2020-11-12

#pragma once
#include <vector>

using namespace std;
// Pour passer des paramètres à une fonction, il y a deux méthodes, deux façons, deux autorisations :
// Raison :					1. pour modifier directement le contenu			1. On prend une copie, si on modifie, 
// 						       du paramètre de la fonction qui appelle		   on ne change pas la source, on ne modifie pas
//                             Pour modifier directement l'original,		   l'original
//							   la source
//							2. Si le paramètre est volumineux,				2. Il faut deux espaces mémoires pour la copie et l'original
//                             Si le paramètre prend beaucoup de place en	   Il peut y avoir un temps de latence le temps de copier	
//                             mémoire, on crée un alias sur l'original,
//                             faire un lien direct sur la valeur source
// En français :			Le paramètre est passé Par référence			le paramètre est passé Par Copie, par valeur			
// En informatique :		Écriture : on a le droit de modifier la valeur	Lecture : on peut voir le contenu du paramètre mais pas le modifier
// En C++ :					avec  & après le type du paramètre				sans & après le paramètre



void faireUnTest(int paramParCopie,  int& paramParReference);			// On veut transformer l'appel en prototype




void echangerValeur(int& nb1, int& nb2);		// & pour dire que le paramètre est passé par référence

void afficherContenuVecteur(vector<int> vec);

void ajouterValeurALaFinDuVecteur(vector<int>& vec, int nbElement);

void saisirValeurDansVecteur(vector<int>& vec, int quitter);

//int calculerSommeVecteur(const vector<int>& vec);
int calculerSommeVecteur(vector<int> vec);
float calculerMoyenneVecteur(const vector<int>& vec);
bool trouverIntDansVec(int nombre, vector<int> vec);

int calculerFrequenceDansVecteur(vector<int> vec, int nombre);

