#include <iostream>

using namespace std;

int main()
{
	int maxLength;

	cout << "Entrez la longeur de votre nom : ";
	cin >> maxLength;

	char* ext2 = new char[maxLength + 1];

	cout << "Entrez votre nom : ";
	cin >> ext2;


	cout << "Votre nom est : " << ext2 << endl;


	delete[] ext2;

	return 0;
}