//Inclusion des bibliothèques 
#include <iostream>

//Fonction principale du programme
int main() 
{
    // 1️ La boucle for
    std::cout << "### Boucle for ###" << std::endl;


    for (int i = 0; i < 5; i++) 
    {
        std::cout << "for : i = " << i << std::endl;
    }

    std::cout << std::endl;


    // 2️ La boucle while




    std::cout << "### Boucle while ###" << std::endl;


    int j = 0;


    while (j < 5) 
    {
        std::cout << "while : j = " << j << std::endl;
        j++;
    }

    std::cout << std::endl;

    // 3️ La boucle do-while
    std::cout << "### Boucle do-while ###" << std::endl;

    int k = 5;

    do 
    {
        std::cout << "do-while : k = " << k << std::endl;
        k++;
    } while (k < 5);


    std::cout << std::endl;

    // 4️ Utilisation de break dans une boucle for
    std::cout << "### Utilisation de break dans une boucle for ###" << std::endl;
    for (int l = 0; l < 10; l++) 
    {
        if (l == 5) 
        {
            std::cout << "break atteint à l'itération " << l << std::endl;
            break; // Sort de la boucle dès que l atteint 5
        }
        std::cout << "for (break) : l = " << l << std::endl;
    }

    std::cout << std::endl;

    // 5️ Utilisation de continue dans une boucle for
    std::cout << "### Utilisation de continue dans une boucle for ###" << std::endl;
    for (int m = 0; m < 5; m++) 
    {
        if (m == 2) 
        {
            std::cout << "continue atteint à l'itération " << m << std::endl;
            continue; // Passe à l'itération suivante dès que m atteint 2
        }
        std::cout << "for (continue) : m = " << m << std::endl;
    }

    std::cout << std::endl;

    return 0;
}
