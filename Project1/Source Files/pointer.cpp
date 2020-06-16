#include <iostream>
using namespace std;

//Pointer can save CPU usage and RAM. Instead of copying the value and send to .... Pointer just point to the value address so other function(if exist) can access to the value directly.

void passByValue(int x); //System will read the function of this below before it run main()
void passByReference(int *x);

int pointer() {
	int *p; //Create the pointer
	int n = 0;
	int betty = 13;
	int sandy = 13;

	p =  &n; //&n means address of variable n, p now points to the address of variable n.
	cout << p << endl;
	cout << *p << endl; //This will show the value of the variable it point to

	//*p = n
	//*(address) = its value
	//&(variable) = its address

	*p = 1; //change n to 1
	cout << n << endl;

	*p = *p + 10; // n = n + 10
	cout << n << endl;

	//*p++; //This wont add 1 into *p, because it thinks this as p++, so it add 1 into p, but error because p is an address instead of an int
	//cout << n << endl; 

	(*p)++; //This will add 1 into *p, which means add 1 into n
	cout << n << endl;

	passByValue(betty);
	passByReference(&sandy); //The function takes memory address, so it needs to be &sandy, which is the address(a type of hexadecimal) of sandy

	cout << "Betty is now " << betty << endl; //The value of betty is still same because the function only edited the value that is copied from betty instead of editing it.
	cout << "Sandy is now " << sandy << endl; //The value of sandy changed because pointer have direct access to the actual value

	system("pause");
	return 0;
}

void passByValue(int x) {
	x = 99;
}

void passByReference(int *x) {
	*x = 66;
}

