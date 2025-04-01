#include "Personne.h"

//Définition des constructeurs
Personne::Personne()
{

}

Personne::Personne(string paramName, int paramAge)
{
	this->_name = paramName;
	this->_age = paramAge;
}

//Définition du Destructeur
Personne::~Personne()
{
}

//Définition de la Méthode affichagePersonne
void Personne::affichagePersonne()
{
	cout << "Nom : " << this->_name << ", Âge : " << this->_age << " ans" << endl;
}

//Accesseurs
//Getter
string Personne::getName()
{
	return this->_name;
}

//Setter
void Personne::setName(string paramName)
{
	this->_name = paramName;
}