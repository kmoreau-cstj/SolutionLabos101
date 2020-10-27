#include "Labo05MesFonctions2.h"
#include <iostream>

using namespace std;

int calculerCarre(int entier)
{
    return entier*entier;
}

int calculerCube(int nb)
{
    return nb*nb*nb;
}

double calculerCube(double valeur)
{
    return valeur*valeur*valeur;
}

double calculerFactorielle(int nombre) // nombre vaut 5 1*2*3*4*5
{
    double factorielle = 1;           // Au départ, la factorielle de 0! vaut 1 et ensuite on multiplie toujours en commençant à 1
    
    
    for (int compteur = 1; compteur <= nombre; compteur++)
    {
        factorielle = factorielle * compteur;
    }

    return factorielle;
}

int validerNombrePositif(int nombre)
{
    while (nombre < 0)
    {
        cerr << "Erreur : Le nombre doit être positif." << endl;
        cout << "Veuillez entrer un nombre positif : ";
        cin >> nombre;
    }

    
    return nombre;
}
