#include <iostream>

using namespace std;

// D�finition d'une structure "Personne"
struct Personne 
{
    string nom;      // Nom de la personne
    int age;         // �ge de la personne
    float taille;    // Taille en m�tres
};

int main() 
{
    // D�claration d'une variable de type Personne
    Personne individu1;

    // Assignation des valeurs aux membres de la structure
    individu1.nom = "Alice";
    individu1.age = 25;
    individu1.taille = 1.68;

    // Affichage des informations
    cout << "Nom : " << individu1.nom << endl;
    cout << "�ge : " << individu1.age << " ans" << endl;
    cout << "Taille : " << individu1.taille << " m" << endl;

    return 0;
}