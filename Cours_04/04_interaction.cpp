#include <iostream>

int main() 
{
    //D�claration d'une variable enti�re "age"
    int age;

    std::cout << "Entrez votre �ge : ";
    std::cin >> age;  // Saisie de l'utilisateur, on assigne donc la saisie de l'utilsiateur dans la variable age d�clarer au dessus

    std::cout << "Vous avez " << age << " ans." << std::endl; //on affiche avec un std::cout la valeur stock� dans la variable age

    return 0;
}