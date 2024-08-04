#include <iostream>
#include <string>
#include <cstring>
#include <limits>

using namespace std;
int main() {

	int marks;

	cout << "Input marks: " << "\n";
	cin >> marks;

	cout << "Grade: ";
	if (marks < 25) {
		cout << "F" << "\n";
	} else if (marks <= 44) {
		cout << "E" << "\n";
	} else if (marks <= 49) {
		cout << "D" << "\n";
	} else if (marks <= 59) {
		cout << "C" << "\n";
	} else if (marks <= 79 ) {
		cout << "B" << "\n";
	} else if (marks <= 100) {
		cout << "A" << "\n";
	} 
	return 0;
}
