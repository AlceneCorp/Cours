#include <iostream>

using namespace std;

// Définition d'une structure "Personne"
struct Personne 
{
    string nom;      // Nom de la personne
    int age;         // Âge de la personne
    float taille;    // Taille en mètres
};

int main() 
{
    // Déclaration d'une variable de type Personne
    Personne individu1;

    // Assignation des valeurs aux membres de la structure
    individu1.nom = "Alice";
    individu1.age = 25;
    individu1.taille = 1.68;

    // Affichage des informations
    cout << "Nom : " << individu1.nom << endl;
    cout << "Âge : " << individu1.age << " ans" << endl;
    cout << "Taille : " << individu1.taille << " m" << endl;

    return 0;
}