#include <iostream>
#include <string>

#include "Etudiant.h"

using namespace std;


int main()
{
	int n;
	cout << "Combien d'étudiants voulez-vous enregistrer ? ";
	cin >> n;

	Etudiant* etudiants = new Etudiant[n];

	for (int i = 0; i < n; i++)
	{
		string nom;
		int age;
		double note;

		cout << "\nEtudiant " << (i + 1) << " : " << endl;
		cout << "Nom : ";
		cin >> nom;
		cout << "Age : ";
		cin >> age;
		cout << "Note : ";
		cin >> note;

		etudiants[i] = Etudiant(nom, age, note);
	}

	Etudiant meilleur = etudiants[0];

	for (int i = 1; i < n; i++)
	{
		if (etudiants[i].getNote() > meilleur.getNote())
		{
			meilleur = etudiants[i];
		}
	}

	cout << endl << "L'étudiant avec la meilleure note est : " << meilleur.getNom() << " avec " << meilleur.getNote() << endl;

	delete[] etudiants;

	return 0;
}