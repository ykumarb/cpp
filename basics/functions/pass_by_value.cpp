#include <iostream>

using namespace std;


/* In pass by value; only the copy of the argument is sent
 * by the caller and not the original value itself
 * so changes in the copy will not affect the original in
 * the caller
 */

void pass_by_value_example(int num) {
	num += 5;
	cout << "Num: " << num << "\n";
	num += 5;
	cout << "Num: " << num << "\n";
	num += 5;
	cout << "Num: " << num << "\n";
	
	return ;
}


int main(void) {
	int num = 10;
	pass_by_value_example(num);

	cout << "Final in caller: " << num << "\n";
	return 0;

}
