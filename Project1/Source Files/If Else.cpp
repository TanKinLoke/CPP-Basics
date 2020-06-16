#include <iostream>
using namespace std;

int ifelse() {
	int a, b;

	cout << "Enter number for A: ";
	cin >> a;
	cout << "Enter number for B: ";
	cin >> b;

	if (a > b) {
		cout << "A is greater than B" << endl;
		cout << "Value of A is " << a << " and Value of B is " << b << endl;
	}
	else if (a == -1) {
		return 0; //This will close the program
	}
	else if (a == b) {
		cout << "A is equal to B" << endl;
		cout << "Value of A is " << a << " and Value of B is " << b << endl;
	}
	else {
		cout << "B is greater than A" << endl;
		cout << "Value of A is " << a << " and Value of B is " << b << endl;
	}

	system("pause");
	return 0;
}