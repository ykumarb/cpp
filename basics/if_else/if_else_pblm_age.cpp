#include <iostream>
#include <string>
using namespace std;

int main(void) {

	int age;
	cout << "Input age: ";
	cin >> age;

	if (age < 18) {
		cout << "Not eligible for job!" << "\n";
	} else if (age <= 54) {
		cout << "eligible for job" << "\n";
	} else if (age <= 57) {
		cout << "eligible for job, but retirement soon." << "\n";
	} else if (age > 57) {
		cout << "retirement time" << "\n";
	}

	return 0;
}
