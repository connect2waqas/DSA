#include <iostream>
using namespace std;

int main() {
	int numbers[100];
	int size;
	int searchValue;
	int foundIndex = -1;

	cout << "Enter the number of elements: ";
	cin >> size;

	cout << "Enter the elements: ";
	for (int index = 0; index < size; index++) {
		cin >> numbers[index];
	}

	cout << "Enter the value to search: ";
	cin >> searchValue;

	for (int index = 0; index < size; index++) {
		if (numbers[index] == searchValue) {
			foundIndex = index;
			break;
		}
	}

	if (foundIndex != -1) {
		cout << "Value found at index " << foundIndex << ".\n";
	} else {
		cout << "Value not found.\n";
	}

	return 0;
}
