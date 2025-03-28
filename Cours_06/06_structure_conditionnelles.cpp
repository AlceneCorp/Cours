#include <iostream>


int main() 
{
    // --- 1️ Structure if, else if, else ---
    int age;
    std::cout << "Entrez votre âge : ";
    std::cin >> age;

    if (age < 18) 
    {
        std::cout << "Vous êtes mineur." << std::endl;
    }
    else if (age == 18) 
    {
        std::cout << "Vous venez d’atteindre la majorité !" << std::endl;
    }
    else 
    {
        std::cout << "Vous êtes majeur." << std::endl;
    }

    // --- 2️ Structure switch-case ---
    int jour;
    std::cout << "\nEntrez un numéro de jour (1-7) : ";
    std::cin >> jour;

    switch (jour) 
    {
        case 1: std::cout << "Lundi" << std::endl; break;
        case 2: std::cout << "Mardi" << std::endl; break;
        case 3: std::cout << "Mercredi" << std::endl; break;
        case 4: std::cout << "Jeudi" << std::endl; break;
        case 5: std::cout << "Vendredi" << std::endl; break;
        case 6:
        case 7: std::cout << "Week-end !" << std::endl; break;
        default: std::cout << "Jour invalide !" << std::endl;
    }

    // --- 3️ Opérateur ternaire ---
    int nombre;
    std::cout << "\nEntrez un nombre : ";
    std::cin >> nombre;

    std::string resultat = (nombre % 2 == 0) ? "Pair" : "Impair";
    std::cout << "Le nombre est " << resultat << "." << std::endl;

    return 0;
}
