#include <iostream>
#include <string>
#include <cstring>
#include <limits>

using namespace std;
int main(void) {

	int age;
	cout << "Age: " << "\n";
	cin >> age;

	if (age >= 18) {
		cout << "You are an adult" << "\n";
	} 
	
	else {
		cout << "You are not an adult" << "\n";
	}
	return 0;
}
