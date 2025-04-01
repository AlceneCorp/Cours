#ifndef INCLUDE_PERSONNE
#define INCLUDE_PERSONNE

#include <iostream>
#include <string>

using namespace std;


class Personne
{
private:
	//Variables Membres
	string _name;
	int _age;

public:
	//Constructeurs

	Personne();
	Personne(string paramName, int paramAge);

	//Destructeur
	~Personne();

	//Méthode
	void affichagePersonne();

	//Accesseurs
	//Getter
	string getName();

	//Setter
	void setName(string paramName);
};

#endif // !INCLUDE_PERSONNE