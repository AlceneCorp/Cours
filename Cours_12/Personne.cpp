#include "Personne.h"

Personne::Personne(string paramName, int paramAge)
{
	this->_name = paramName;
	this->_age = paramAge;
}

void Personne::affichagePersonne()
{
	cout << "Nom : " << this->_name << ", �ge : " << this->_age << " ans" << endl;
}