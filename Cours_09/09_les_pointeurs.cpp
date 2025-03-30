#include <iostream>  // Inclusion de la biblioth�que pour l'affichage

using namespace std; // Permet d'�viter d'�crire "std::" avant cout et endl

int main() 
{
    int boite = 10; // D�clare une variable "bo�te" qui contient la valeur 10
    int* etiquette = &boite; // D�clare un pointeur "�tiquette" qui stocke l'adresse de "bo�te"

    // Affichage des valeurs et des adresses
    cout << "Valeur de la bo�te : " << boite << endl;         // Affiche la valeur de la bo�te (10)
    cout << "Adresse de la bo�te : " << &boite << endl;       // Affiche l'adresse m�moire de la bo�te
    cout << "Valeur stock�e dans l'�tiquette (adresse de la bo�te) : " << etiquette << endl; // Affiche l'adresse stock�e dans l'�tiquette
    cout << "Valeur point�e par l'�tiquette (*etiquette) : " << *etiquette << endl; // Affiche la valeur � l'adresse point�e par le pointeur (10)

    return 0; // Fin du programme
}


/*
	Les pointeurs sont une des fonctionnalit�s les plus puissantes et d�licates de C++. 
	Ils permettent de manipuler directement la m�moire et sont largement utilis�s pour l�optimisation, 
	la gestion dynamique des objets et la manipulation avanc�e des structures de donn�es.
*/