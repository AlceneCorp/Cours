#include <iostream>  // Inclusion de la biblioth�que pour l'affichage

using namespace std; // Permet d'�viter d'�crire "std::" avant cout et endl

//Prototypages
void ajout(int *a, int b);

int main() 
{
    int entier = 10;

    ajout(&entier, 5);

    cout << "Valeur de entier : " << entier << endl;

    return 0; // Fin du programme
}

void ajout(int *a, int b)
{
    *a = *a + b;
}