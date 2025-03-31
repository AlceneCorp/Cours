#include <iostream>

using namespace std;

// Définition de la classe Personne
class Personne 
{
    private: // Partie privée : accessible uniquement dans la classe
    string nom;
    int age;

    public: // Partie publique : accessible depuis l'extérieur
    // Constructeur
    Personne(string nomPers, int agePers) 
    {
        nom = nomPers;
        age = agePers;
    }

    // Méthode pour afficher les infos
    void afficherInfos() 
    {
        cout << "Nom : " << nom << ", Âge : " << age << " ans" << endl;
    }
};

int main() 
{
    // Création d'un objet de la classe Personne
    Personne p1("Alice", 25);

    // Appel de la méthode afficherInfos
    p1.afficherInfos();

    return 0;
}
