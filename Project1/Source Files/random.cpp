#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include <Windows.h>
using namespace std;



int random() {
	int num = 0;
	int numrand = 1;
	char yn;
	char tryagain = 'n';
	string name;
	srand(time(NULL)); // If this doesn't exist, the program will generate same number as before

	cout << "Welcome to Guess The Number." << endl;
	cout << "Please enter your name: ";
	cin >> name;
	cout << "Are you sure you want to play the game? (y/n)";
	cin >> yn;


	do {
		if (yn == 'y' || yn == 'Y') {
			cout << "Enter a number between 0-5: ";
			cin >> num;
			numrand = rand() % 5;

			if (num == numrand) {
				cout << "Congratulations, " << name << "!!! You have won the game!!!" << endl;
				tryagain = 'n';
			}
			else if (num < 0) {
				cout << "Your number is not within the answer range." << endl;
				cout << "Do you want to try again? (y/n)";
				cin >> tryagain;
			}
			else if (num != numrand) {
				cout << "Too bad, the answer is " << numrand << endl;
				cout << "Do you want to try again? (y/n)";
				cin >> tryagain;
			}
		}
		else if (yn == 'n' || yn == 'N') {
			cout << "Ok, hope to see you again!" << endl;
		}
		else {
			cout << "Unknow answer detected. Exiting Program" << endl;
		}
	} while (tryagain == 'y' || tryagain == 'Y');


	//for (int i = 0; i < 10; i++) {
	//	numrand = rand() % 10;
		//rand() will generate random number
		// %10 will bring the number from 0 -10
	//}
	system("pause");
	return 0;
}

