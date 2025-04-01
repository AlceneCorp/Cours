#include "Personne.h"

//D�finition des constructeurs
Personne::Personne()
{

}

Personne::Personne(string paramName, int paramAge)
{
	this->_name = paramName;
	this->_age = paramAge;
}

//D�finition du Destructeur
Personne::~Personne()
{
}

//D�finition de la M�thode affichagePersonne
void Personne::affichagePersonne()
{
	cout << "Nom : " << this->_name << ", �ge : " << this->_age << " ans" << endl;
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