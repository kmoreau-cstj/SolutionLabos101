#include "Labo07Fonctions.h"
#include <iostream>
#include <ctime>

using namespace std;

int genererAlea(int min, int max)
{
    // srand(time(NULL));   Il ne faut pas mettre la graine de l'aléa dans la fonction qui génère le nombre
    // Le srand va uniquement au début du programme principal.
    return rand()% (max-min +1) + (min);
}
