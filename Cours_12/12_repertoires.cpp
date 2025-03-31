#include <iostream>
#include "Personne.h"

using namespace std;

int main()
{

	Personne p1("Alcene", 37);
	p1.affichagePersonne();


	Personne* p2 = new Personne("Peach", 30);
	p2->affichagePersonne();

	Personne *p3 = new Personne("Alice", 22);


	delete p2;
	delete p3;

	return 0;
}