#include <iostream>

using namespace std;

// D�finition de la classe Personne
class Personne 
{
    private: // Partie priv�e : accessible uniquement dans la classe
    //Variables Membres
    string nom;
    int age;

    public: // Partie publique : accessible depuis l'ext�rieur
    // Constructeur
    Personne(string nomPers, int agePers) 
    {
        this->nom = nomPers;
        this->age = agePers;
    }

    // M�thode pour afficher les infos
    void afficherInfos() 
    {
        cout << "Nom : " << nom << ", �ge : " << age << " ans" << endl;
    }

    //Accesseurs
    //Getter
    string getNom()
    {
        return this->nom;
    }

    int getAge()
    {
        return this->age;
    }


    //Setter
    void setNom(string paramNom)
    {
        this->nom = paramNom;
    }

    void setAge(int paramAge)
    {
        this->age = paramAge;
    }
};

int main() 
{
    // Cr�ation d'un objet de la classe Personne
    Personne p1("Alice", 25);
    Personne p2("Peach", 31);
    Personne p3("Alcene", 37);


    // Appel de la m�thode afficherInfos
    p1.afficherInfos();
    p2.afficherInfos();
    p3.afficherInfos();

    p1.setNom("Claire");
    p1.setAge(26);

    p1.afficherInfos();

    cout << p1.getNom() << " : " << p1.getAge() << endl;

    return 0;
}
