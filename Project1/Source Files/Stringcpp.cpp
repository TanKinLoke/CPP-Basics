#include <iostream>
#include <string>
using namespace std;

int String() {
	string s;
	s = "Some text";
	
	cout << s << endl;
	cout << s.at(0) << endl; //cout the first letter of the variable

	string word;
	cout << "Enter the word: " << endl;
	cin >> word;

	s = s + word; // Combine both variable, can use s += word

	cout << s << endl;
	cout << s.length() << endl; // The amount of letters in variable s
	cout << s.append("test") << endl; //Add "test" into the variable

	system("pause");
	return 0;
}