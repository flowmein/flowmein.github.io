#include <iostream>

using namespace std;

int main() {

	int count = 0;

	int arr[7] = {1, 2, 3, 4, 5, 6, 7};
	for(int i = 0; i < 7; i++) {
		for (int j = 0; j <= i; j++) {
			cout << arr[j];
			count++;
		}
		cout << endl;
	}

	cout << count;
	return 0;
}
