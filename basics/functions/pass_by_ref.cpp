#include <iostream>
#include <string>

using namespace std;

/* Here the original value is passed as reference. The address itself 
 * is passed here, which when manipulated will be updated in caler as
 * well
 */
void pass_by_ref(string &str) {
	str[0] = 'Y';
	cout << "Str: " << str << "\n";
}

int main() {

	string str;
	cin >> str;

	pass_by_ref(str);
	cout << "Str: " << str << "\n";

	return 0;
}
