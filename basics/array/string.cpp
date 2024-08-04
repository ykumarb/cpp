#include <iostream>
#include <string>

using namespace std;

int main(void) {

	string s = "Yupindra";

	/* this is string library method */
	int len = s.size();
	
	s[len-1] = 'e';

	cout << "s: " << s <<"\n";

	return 0;
}	




