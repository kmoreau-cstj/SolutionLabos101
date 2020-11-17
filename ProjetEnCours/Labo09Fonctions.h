// But : Cr�er des fonctions qui prennent des param�tres par r�f�rence
// Auteur : Karine Moreau
// Date : 2020-11-12

#pragma once
#include <vector>

using namespace std;
// Pour passer des param�tres � une fonction, il y a deux m�thodes, deux fa�ons, deux autorisations :
// Raison :					1. pour modifier directement le contenu			1. On prend une copie, si on modifie, 
// 						       du param�tre de la fonction qui appelle		   on ne change pas la source, on ne modifie pas
//                             Pour modifier directement l'original,		   l'original
//							   la source
//							2. Si le param�tre est volumineux,				2. Il faut deux espaces m�moires pour la copie et l'original
//                             Si le param�tre prend beaucoup de place en	   Il peut y avoir un temps de latence le temps de copier	
//                             m�moire, on cr�e un alias sur l'original,
//                             faire un lien direct sur la valeur source
// En fran�ais :			Le param�tre est pass� Par r�f�rence			le param�tre est pass� Par Copie, par valeur			
// En informatique :		�criture : on a le droit de modifier la valeur	Lecture : on peut voir le contenu du param�tre mais pas le modifier
// En C++ :					avec  & apr�s le type du param�tre				sans & apr�s le param�tre



void faireUnTest(int paramParCopie,  int& paramParReference);			// On veut transformer l'appel en prototype




void echangerValeur(int& nb1, int& nb2);		// & pour dire que le param�tre est pass� par r�f�rence

void afficherContenuVecteur(vector<int> vec);

void ajouterValeurALaFinDuVecteur(vector<int>& vec, int nbElement);

void saisirValeurDansVecteur(vector<int>& vec, int quitter);

//int calculerSommeVecteur(const vector<int>& vec);
int calculerSommeVecteur(vector<int> vec);
float calculerMoyenneVecteur(const vector<int>& vec);
bool trouverIntDansVec(int nombre, vector<int> vec);

int calculerFrequenceDansVecteur(vector<int> vec, int nombre);

