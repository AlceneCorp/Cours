#include "Etudiant.h"

Etudiant::Etudiant()
{

}

Etudiant::Etudiant(string paramNom, int paramAge, double paramNote)
{
	this->_nom = paramNom;
	this->_age = paramAge;
	this->_note = paramNote;
}

void Etudiant::afficher()
{
	cout << "Nom : " << this->_nom << ", Age : " << this->_age << ", Note : " << this->_note << endl;
}

double Etudiant::getNote()
{
	return this->_note;
}

string Etudiant::getNom()
{
	return this->_nom;
}