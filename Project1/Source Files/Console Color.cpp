#include <iostream>
#include <Windows.h>; //Allow to use some windows features like changing color for the console window
using namespace std;

int color() {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE); //Read the console so it can make changes to it
	SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY); //intensity give us brighter color, can only use RGB
	cout << "Red + Blue Text" << endl;
	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_BLUE); // Add both colors
	for (int a = 1; a < 10; a += 2) {
		cout << "Line number " << a << endl;

	}

	system("pause");
	return 0;
}