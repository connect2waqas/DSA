#include <iostream>
using namespace std;

int main() {
	int numbers[100];
	int size;

	cout << "Enter the number of elements: ";
	cin >> size;

	cout << "Enter the elements: ";
	for (int index = 0; index < size; index++) {
		cin >> numbers[index];
	}

	for (int pass = 0; pass < size - 1; pass++) {
		for (int index = 0; index < size - pass - 1; index++) {
			if (numbers[index] > numbers[index + 1]) {
				int temporary = numbers[index];
				numbers[index] = numbers[index + 1];
				numbers[index + 1] = temporary;
			}
		}
	}

	cout << "Ascending order: ";
	for (int index = 0; index < size; index++) {
		cout << numbers[index] << " ";
	}

	cout << "\nDescending order: ";
	for (int index = size - 1; index >= 0; index--) {
		cout << numbers[index] << " ";
	}

	cout << "\n";
	return 0;
}
