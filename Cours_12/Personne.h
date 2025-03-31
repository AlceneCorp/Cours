#ifndef INCLUDE_PERSONNE
#define INCLUDE_PERSONNE

#include <iostream>
#include <string>

using namespace std;

class Personne
{
private:
	string _name;
	int _age;

public:
	Personne(string paramName, int paramAge);

	void affichagePersonne();
};

#endif // !INCLUDE_PERSONNE