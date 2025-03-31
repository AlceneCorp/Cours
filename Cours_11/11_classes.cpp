#include <iostream>

using namespace std;

// D�finition de la classe Personne
class Personne 
{
    private: // Partie priv�e : accessible uniquement dans la classe
    string nom;
    int age;

    public: // Partie publique : accessible depuis l'ext�rieur
    // Constructeur
    Personne(string nomPers, int agePers) 
    {
        nom = nomPers;
        age = agePers;
    }

    // M�thode pour afficher les infos
    void afficherInfos() 
    {
        cout << "Nom : " << nom << ", �ge : " << age << " ans" << endl;
    }
};

int main() 
{
    // Cr�ation d'un objet de la classe Personne
    Personne p1("Alice", 25);

    // Appel de la m�thode afficherInfos
    p1.afficherInfos();

    return 0;
}
