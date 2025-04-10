//Inclusion des bibliothèques
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int RandomNumber(int min, int max);

//Fonction principal du programe
int main()
{
	int menuChoice;
	bool isOn = true;
	bool PlusOuMoins = true;

	int numberGuess;
	int randomNumber;


	srand(static_cast<unsigned int>(time(nullptr)));

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
				do
				{
					system("cls");
					cout << "===========================" << endl;
					cout << "====== Plus ou Moins ======" << endl;
					cout << "===========================" << endl;
					cout << "1 - Jouer" << endl;
					cout << "9 - Quitter" << endl;
					cout << "===========================" << endl;
					cout << "Quel est votre choix ? : ";
					cin >> menuChoice;

					switch (menuChoice)
					{
						case 1:
							randomNumber = RandomNumber(0, 2000000000);
							cout << "Nombre random : " << randomNumber << endl;
							do
							{
								cout << "Quel est le nombre caché ? : " << endl;
								cin >> numberGuess;
								if (numberGuess < randomNumber)
								{
									cout << "C'est plus !!!!!" << endl;
								}
								else if (numberGuess > randomNumber)
								{
									cout << "C'est moins !!!!!" << endl;
								}
								else
								{
									cout << "Bravo ! Vous avez trouvé !!" << endl;
								}
								cout << endl;
								//system("pause");
							} while (numberGuess != randomNumber);

							break;
						
						case 9:
							PlusOuMoins = false;
							break;	
					}

				} while (PlusOuMoins == true);

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


int RandomNumber(int min, int max)
{
	return min + (rand() % (max - min + 1));
}