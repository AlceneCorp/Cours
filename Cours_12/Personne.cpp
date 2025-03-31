#include "Personne.h"

Personne::Personne(string paramName, int paramAge)
{
	this->_name = paramName;
	this->_age = paramAge;
}

void Personne::affichagePersonne()
{
	cout << "Nom : " << this->_name << ", Âge : " << this->_age << " ans" << endl;
}