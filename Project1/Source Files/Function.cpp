#include <iostream>
#include <Windows.h>
using namespace std;

int sum(int a, int b) {
	cout << "Function sum is executing" << endl;
	int c = a + b;
	return c; //end the function and return c
}

void WelcomeMessage() {

	cout << "Welcome to our Program!" << endl;
}

void StartProgram(string filename) {

	ShellExecute(NULL,"open",filename.c_str(),NULL,NULL,SW_MAXIMIZE);
	//First NULL is for the handler, means the program will run without connected to our program.
	//open means open some file or application. TYPES: edit, explore, find, print
	//filename.c_str() will convert the string into a const char
	//second NULL is for parameters, means there is no parameter
	//third NULL is for directory, NULL means default directory
	//SW_SHOWNORMAL is for the window size, means normal size for the window
	//Window size example (SW_): HIDE, MAXIMIZE, MINIMIZE, RESTORE, SHOW, SHOWDEFAULT, SHOWMAXIMIZED, SHOWMINIMIZED, SHOWNA, SHOWNOACTIVATE, SHOWNORMAL, SHOWMINNOACTIVE
}

int function() {

	WelcomeMessage();
	int a, b;

	cout << "Enter first number: " << endl;
	cin >> a;
	cout << "Enter second number: " << endl;
	cin >> b;

	int c = sum(a,b);

	cout << c << endl;

	StartProgram("mspaint"); //Start Windows Paint

	system("pause");
	return 0;
}