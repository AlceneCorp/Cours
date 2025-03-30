#include <iostream>  // Inclusion de la bibliothèque pour l'affichage

using namespace std; // Permet d'éviter d'écrire "std::" avant cout et endl

int main() 
{
    int boite = 10; // Déclare une variable "boîte" qui contient la valeur 10
    int* etiquette = &boite; // Déclare un pointeur "étiquette" qui stocke l'adresse de "boîte"

    // Affichage des valeurs et des adresses
    cout << "Valeur de la boîte : " << boite << endl;         // Affiche la valeur de la boîte (10)
    cout << "Adresse de la boîte : " << &boite << endl;       // Affiche l'adresse mémoire de la boîte
    cout << "Valeur stockée dans l'étiquette (adresse de la boîte) : " << etiquette << endl; // Affiche l'adresse stockée dans l'étiquette
    cout << "Valeur pointée par l'étiquette (*etiquette) : " << *etiquette << endl; // Affiche la valeur à l'adresse pointée par le pointeur (10)

    return 0; // Fin du programme
}


/*
	Les pointeurs sont une des fonctionnalités les plus puissantes et délicates de C++. 
	Ils permettent de manipuler directement la mémoire et sont largement utilisés pour l’optimisation, 
	la gestion dynamique des objets et la manipulation avancée des structures de données.
*/