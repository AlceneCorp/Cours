#include <iostream>

using namespace std;

//Prototypages
int addition(int a, int b);

int main()
{
	cout << "5 + 6 = " << addition(5, 6) << endl;
	return 0;
}

int addition(int a, int b)
{
	return a + b;
}


/*
	Les fonctions sont des blocs de code réutilisables qui effectuent une tâche spécifique. 
	Elles permettent de structurer un programme en sous-parties plus lisibles et maintenables.
*/