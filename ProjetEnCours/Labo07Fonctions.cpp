#include "Labo07Fonctions.h"
#include <iostream>
#include <ctime>

using namespace std;

int genererAlea(int min, int max)
{
    // srand(time(NULL));   Il ne faut pas mettre la graine de l'al�a dans la fonction qui g�n�re le nombre
    // Le srand va uniquement au d�but du programme principal.
    return rand()% (max-min +1) + (min);
}
