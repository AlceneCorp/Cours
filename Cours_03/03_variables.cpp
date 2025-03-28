#include <iostream>
#include <string> // Pour std::string

int main()
{
    // Variables et types de données
    // Déclaration et initialisation
    int entier = 10;
    double reel = 2.4;
    float flottant = 3.14f;
    char caractere = 'a';
    char sexe = 'M';
    char separator = '\n';
    bool exist = true;

    short petitEntier = 32767;
    long grandEntier = 1000000;
    long long tresGrandEntier = 9223372036854775807LL;
    unsigned int positif = 50;
    signed int negatif = -50;
    std::string texte = "Hello, C++!";

    // Affichage des valeurs et de la taille en mémoire
    std::cout << "Type          | Valeur                  | Taille (octets)" << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "int           | " << entier << "                      | " << sizeof(int) << std::endl;
    std::cout << "double        | " << reel << "                    | " << sizeof(double) << std::endl;
    std::cout << "float         | " << flottant << "                   | " << sizeof(float) << std::endl;
    std::cout << "char          | " << caractere << "                      | " << sizeof(char) << std::endl;
    std::cout << "bool          | " << exist << "                      | " << sizeof(bool) << std::endl;
    std::cout << "short         | " << petitEntier << "                 | " << sizeof(short) << std::endl;
    std::cout << "long          | " << grandEntier << "             | " << sizeof(long) << std::endl;
    std::cout << "long long     | " << tresGrandEntier << " | " << sizeof(long long) << std::endl;
    std::cout << "unsigned int  | " << positif << "                     | " << sizeof(unsigned int) << std::endl;
    std::cout << "std::string   | " << texte << "       | " << sizeof(std::string) << std::endl;

    return 0;
}


/*
    sizeof(std::string) affiche la taille de l’objet en mémoire et non la longueur du texte. En interne, std::string utilise une allocation dynamique.

    Sur un système 32 bits, long fait 4 octets, tandis que sur un 64 bits, il peut faire 8 octets.

    bool est techniquement 1 octet, même s'il ne stocke que true ou false (car l'alignement mémoire l'impose).
*/