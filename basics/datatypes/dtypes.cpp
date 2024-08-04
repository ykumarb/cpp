#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main(void) {

	int a, b;
	cout << "Input a and b: " << "\n";
       	cin >> a >> b;
	
	char c;
	cout << "Input c: " << "\n";
	cin >> c;

	cout << "a: " << a << " b: " << b << "\n";
	cout << "c: " << c << "\n";

	float f;
	cout << "Input f: " << "\n";
	cin >> f;

	cout << "f: " << f << "\n";

	double d;
	cout << "Input d: " << "\n";
	cin >> d;

	cout << "d: " << d << "\n";

	string str;
	cout << "Input string: " << "\n";
	cin >> str;

	cout << "str: " << str << "\n";

	long l;
	cout << "Input long: " << "\n";
	cin >> l;
	
	cout << "l: " << l << "\n";

	long long ll;
	cout << "Input long long: " << "\n";
	cin >> ll;

	cout << "ll: " << ll << "\n";

	// clear the new line character left in the input buffer by previous cin operations
	/* When a cin is done next line will be there in buffer. So using getline directly
	 * will read this left over next line in input buffer which causes issue in not
	 * reading the str1. So use cin.ignore to ignore residual characters upto max len of stream
	 * or upto delimiter. This will effectively remove the \n from the previous buffer 
	 */
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
        string str1;
        cout << "Input a string: " << "\n";
        getline(cin, str1);

        cout << "str: " << str1 << "\n";

	return 0;
}
