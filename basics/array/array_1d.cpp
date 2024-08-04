#include <iostream>

using namespace std;

int main(void) {

	int arr[5] = {0};

	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

	arr[3] = 67;

	cout << "arr[3]: " << arr[3] << "\n";

	return 0;
}
