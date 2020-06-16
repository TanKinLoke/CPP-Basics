#include <iostream>
#include <time.h>
using namespace std;

int array() {
	int b[5] = {1,2,3,4,5};
	cout << b[-1] << endl;

	/*for (int i = 0; i<5; i++) {
		cout << "Enter number " << i << ": ";
		cin >> b[i];
		//Insert number into the array
	}
	b[0] = 1000; //put 1000 into the next array, so it will be b[5]
	int c = b[4];
	for (int i=0;i<5;i++) {
		cout << b[i] << endl;
		//Print out the number in the array
	}

	cout << "Value of c is " << c << endl;
	cout << b[99] << endl; //undefined values will be 0*/

	system("pause");
	return 0;
}