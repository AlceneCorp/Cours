#ifndef INCLUDE_ETUDIANT
#define INCLUDE_ETUDIANT

#include <iostream>
#include <string>

using namespace std;

class Etudiant
{
private:
	string _nom;
	int _age;
	double _note;
	
public:
	Etudiant();

	Etudiant(string paramNom, int paramAge, double paramNote);

	void afficher();

	double getNote();

	string getNom();
};

#endif
