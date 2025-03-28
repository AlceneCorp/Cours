#include <iostream>

using namespace std;

int main() 
{
    // --- 1️ Structure if, else if, else ---
    //Déclaration d'une variable de type entier
    /*int age;
    std::cout << "Entrez votre âge : ";
    std::cin >> age;*/

    char sexe;

    cout << "Quel est votre sexe ? (M ou F) : ";
    cin >> sexe;

    /*if (sexe == 'M')
    {
        cout << "Vous êtes un homme !" << endl;
    }
    else if (sexe == 'F')
    {
        cout << "Vous êtes une femme !" << endl;
    }
    else
    {
        cout << "Vous ête déficiant mental, faite vous soigner !" << endl;
    }*/

    switch (sexe)
    {
        case 'm':
        case 'M':
            cout << "Vous êtes un homme !" << endl;
            break;

        case 'f':
        case 'F':
            cout << "Vous êtes une femme !" << endl;
            break;

        default:
            cout << "Vous ête déficiant mental, faite vous soigner !" << endl;
            break;
    }


    // --- 2️ Structure switch-case ---
    //Déclaration d'une variable de type entier
    int jour;

    std::cout << endl << "Entrez un numéro de jour (1 - 7) : ";
    std::cin >> jour;

    switch (jour) 
    {
        case 1: 
            std::cout << "Lundi" << std::endl; 
            break;

        case 2: 
            std::cout << "Mardi" << std::endl; 
            break;

        case 3: 
            std::cout << "Mercredi" << std::endl; 
            break;

        case 4: 
            std::cout << "Jeudi" << std::endl; 
            break;

        case 5: 
            std::cout << "Vendredi" << std::endl; 
            break;

        case 6:
        case 7: 
            std::cout << "Week-end !" << std::endl; 
            break;

        default: 
            std::cout << "Jour invalide !" << std::endl;
    }

    // --- 3️ Opérateur ternaire ---
    //Déclaration d'une variable de type entier
    int nombre;

    std::cout << "\nEntrez un nombre : ";
    std::cin >> nombre;

    std::string resultat = (nombre % 2 == 0) ? "Pair" : "Impair";
    /*
    if ((nombre % 2) == 0)
    {
        resultat = "Pair";
    }
    else
    {
        resultat = "Impair";
    }*/


    std::cout << "Le nombre est " << resultat << "." << std::endl;

    return 0;
}
