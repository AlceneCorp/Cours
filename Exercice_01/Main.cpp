//Inclusion des bibliothèques
#include <iostream>
#include <string>

using namespace std;

//Fonction principal du programe
int main()
{
	int menuChoice;
	bool isOn = true;


	do
	{
		system("cls");
		cout << "===========================" << endl;
		cout << "========== MENU ===========" << endl;
		cout << "===========================" << endl;
		cout << "1 - Plus ou Moins" << endl;
		cout << "2 - Pendu" << endl;
		cout << "9 - Quitter" << endl;
		cout << "===========================" << endl << endl;
		cout << "Quel est votre choix ? : ";
		cin >> menuChoice;

		switch (menuChoice)
		{
			case 1:
				//Ici on joue a Plus ou Moins

				break;

			case 2:
				//Ici on joue au Pendu
				break;

			case 9:
				isOn = false;
				break;
		}

	} while (isOn == true);

	return 0;
}