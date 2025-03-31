//Inclusion des bibliothèques
#include <iostream>

using namespace std;

//Prototypages
int addition(int a, int b);
int soustraction(int a, int b);
int multiplication(int a, int b);

int main()
{


	cout << "5 + 6 = " << addition(5, 6) << endl;
	cout << "6 + 6 = " << addition(6, 6) << endl;


	return 0;
}

int addition(int a, int b)
{
	int result = a + b;

	if (result != (a + b))
	{
		return -1;
	}


	return a + b;
}

int soustraction(int a, int b)
{
	return a - b;
}

int multiplication(int a, int b)
{
	return a * b;
}



/*
	Les fonctions sont des blocs de code réutilisables qui effectuent une tâche spécifique. 
	Elles permettent de structurer un programme en sous-parties plus lisibles et maintenables.
*/