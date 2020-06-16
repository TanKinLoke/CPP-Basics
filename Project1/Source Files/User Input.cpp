#include <iostream>
using namespace std;

int main2() {
	double a;
	double b,c;

	a = 0;
	b = 0;

	cout << "Enter number A: ";
	cin >> a;
	cout << "Enter number B: ";
	cin >> b;

	c = a + b;

	cout << "Total of A and B is: " << c << endl;

	system("pause");
	return 0;
}