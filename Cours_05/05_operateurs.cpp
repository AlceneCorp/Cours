#include <iostream>

int main() 
{
    int a = 10, b = 3;
    bool x = true, y = false;

    std::cout << "==== OPERATEURS ARITHMETIQUES ====" << std::endl;
    std::cout << "Addition : " << (a + b) << std::endl;
    std::cout << "Soustraction : " << (a - b) << std::endl;
    std::cout << "Multiplication : " << (a * b) << std::endl;
    std::cout << "Division entière : " << (a / b) << std::endl;
    std::cout << "Modulo : " << (a % b) << std::endl;
    std::cout << "Division réelle : " << (double)a / b << std::endl;

    std::cout << "\n==== OPERATEURS DE COMPARAISON ====" << std::endl;
    std::cout << "a == b : " << (a == b) << std::endl;
    std::cout << "a != b : " << (a != b) << std::endl;
    std::cout << "a < b : " << (a < b) << std::endl;
    std::cout << "a > b : " << (a > b) << std::endl;
    std::cout << "a <= b : " << (a <= b) << std::endl;
    std::cout << "a >= b : " << (a >= b) << std::endl;

    std::cout << "\n==== OPERATEURS LOGIQUES ====" << std::endl;
    std::cout << "x && y : " << (x && y) << std::endl;
    std::cout << "x || y : " << (x || y) << std::endl;
    std::cout << "!x : " << !x << std::endl;

    std::cout << "\n==== OPERATEURS D'AFFECTATION ====" << std::endl;
    //On déclare et initialise un entier "c" égal à 5
    int c = 5;

    std::cout << "Valeur initiale de c : " << c << std::endl;
    //affectation
    c = c + 2;
    std::cout << "c += 2 : " << c << std::endl; //7
    c *= 3;
    std::cout << "c *= 3 : " << c << std::endl; //21
    c -= 4;
    std::cout << "c -= 4 : " << c << std::endl; //17

    std::cout << "\n==== OPERATEURS D'INCREMENTATION / DECREMENTATION ====" << std::endl;
    int d = 5;
    std::cout << "Valeur initiale de d : " << d << std::endl;
    std::cout << "Post-incrémentation d++ : " << d++ << std::endl;
    std::cout << "Après post-incrémentation : " << d << std::endl;
    std::cout << "Pré-incrémentation ++d : " << ++d << std::endl;

    std::cout << "\n==== OPERATEURS BIT A BIT ====" << std::endl;
    int e = 5, f = 3;
    std::cout << "e & f (ET) : " << (e & f) << std::endl;
    std::cout << "e | f (OU) : " << (e | f) << std::endl;
    std::cout << "e ^ f (XOR) : " << (e ^ f) << std::endl;
    std::cout << "~e (NON) : " << ~e << std::endl;
    std::cout << "e << 1 (Décalage gauche) : " << (e << 1) << std::endl;
    std::cout << "e >> 1 (Décalage droit) : " << (e >> 1) << std::endl;

    return 0;
}
