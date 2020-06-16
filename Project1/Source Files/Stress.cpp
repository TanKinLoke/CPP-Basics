#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
using namespace std;

int WINAPI WinMain(HINSTANCE inst, HINSTANCE prev, LPSTR cmd, int show)
//Remember set subsystem to Windows
{
	for (int i = 1; i < 10; i++) {
		string no = to_string(i);
		string file = "/Users/Nelson/Desktop/";
		file += no;
		file += ".txt";
		std::ofstream o(file);
	}
	return 0;
}

/*int main() {
	/*int no = 10;
	string test = to_string(no);
	string file = "/Users/Nelson/Desktop/";
	file += test;
	file += ".txt";
	cout << file;
	for (int i = 1; i < 10; i++) {
		string no = to_string(i);
		string file = "/Users/Nelson/Desktop/";
		file += no;
		file += ".txt";
		std::ofstream o(file);
	}
	//o << "Hello, World\n" << std::endl;
	return 0;
}*/