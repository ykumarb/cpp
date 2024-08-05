// function is used to modularize/readability. Piece of code to minimize work. Does some particular task.

#include <iostream>
#include <string>

using namespace std;

void void_printname() {
	cout << "Yupindra" << "\n";
}

void param_printname(string name) {
	cout << "Name: " << name << "\n";
}

int return_valuefunc(int num, int num2) {
	return num + num2; 
}

int main(void) {

	// Void function
	// return
	// parameterized
	// non parameterized

	/* Void */
	void_printname();

	/* Paaram based */
	string name;
	cin >> name;
	param_printname(name);

	/* Return type based */
	int num = 1, num2 = 2;
	cout << return_valuefunc(num, num2) << "\n";

	return 0;
}
