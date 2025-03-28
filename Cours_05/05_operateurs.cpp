#include <iostream>

int main() 
{
    int a = 10, b = 3;
    bool x = true, y = false;

    std::cout << "==== OPERATEURS ARITHMETIQUES ====" << std::endl;
    std::cout << "Addition : " << (a + b) << std::endl;
    std::cout << "Soustraction : " << (a - b) << std::endl;
    std::cout << "Multiplication : " << (a * b) << std::endl;
    std::cout << "Division enti�re : " << (a / b) << std::endl;
    std::cout << "Modulo : " << (a % b) << std::endl;
    std::cout << "Division r�elle : " << (double)a / b << std::endl;

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
    //On d�clare et initialise un entier "c" �gal � 5
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
    std::cout << "Post-incr�mentation d++ : " << d++ << std::endl;
    std::cout << "Apr�s post-incr�mentation : " << d << std::endl;
    std::cout << "Pr�-incr�mentation ++d : " << ++d << std::endl;

    std::cout << "\n==== OPERATEURS BIT A BIT ====" << std::endl;
    int e = 5, f = 3;
    std::cout << "e & f (ET) : " << (e & f) << std::endl;
    std::cout << "e | f (OU) : " << (e | f) << std::endl;
    std::cout << "e ^ f (XOR) : " << (e ^ f) << std::endl;
    std::cout << "~e (NON) : " << ~e << std::endl;
    std::cout << "e << 1 (D�calage gauche) : " << (e << 1) << std::endl;
    std::cout << "e >> 1 (D�calage droit) : " << (e >> 1) << std::endl;

    return 0;
}
