#include <iostream>

int main() 
{
    //Déclaration d'une variable entière "age"
    int age;

    std::cout << "Entrez votre âge : ";
    std::cin >> age;  // Saisie de l'utilisateur, on assigne donc la saisie de l'utilsiateur dans la variable age déclarer au dessus

    std::cout << "Vous avez " << age << " ans." << std::endl; //on affiche avec un std::cout la valeur stocké dans la variable age

    return 0;
}