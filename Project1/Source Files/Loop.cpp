#include <iostream>
using namespace std;

int loop() {
	int z = 0;
	int a = 0;

	while (true) {
		if (a == -1) {
			break;
		}

		z += a;  //z = z + a
		cin >> a;
	}

	cout << "The result is " << z << endl;

	system("pause");
	return 0;
}