#include <iostream>
#include "Personne.h"

using namespace std;

int main()
{

	Personne p1("Alcene", 37);
	p1.affichagePersonne();

	Personne* p2 = new Personne("Peach", 30);
	p2->affichagePersonne();

	Personne* p3 = new Personne("Alice", 22);
	p3->affichagePersonne();



	delete p2;
	delete p3;

	int nbPersonne;

	cout << "Combien de personnes voulez vous créé ? : ";
	cin >> nbPersonne;

	Personne* tableauPersonne = new Personne[nbPersonne];

	for (int i = 0; i < nbPersonne; i++) //Boucle
	{
		system("cls"); //Netoyage de la console

		//Déclaration de variables
		string name; 
		int age;

		cout << "Personne " << (i + 1) << " : " << endl;
		cout << "Indiquez le nom : ";
		cin >> name;
		cout << endl;
		cout << "Indiquez son age : ";
		cin >> age;

		tableauPersonne[i] = Personne(name, age);
	}

	system("cls");

	cout << "Affichage des personnes : " << endl;

	for (int j = 0; j < nbPersonne; j++)
	{
		tableauPersonne[j].affichagePersonne();
	}



	return 0;
}