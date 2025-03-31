#include <iostream>
#include "Personne.h"

using namespace std;

int main()
{
	Personne p1("Alcene", 37);
	p1.affichagePersonne();


	Personne* p2 = new Personne("Peach", 30);
	p2->affichagePersonne();


	delete p2;

	return 0;
}