#include <iostream>

int main() {
	int numbers[100];
	int size;
	int searchValue;
	int foundIndex = -1;

	std::cout << "Enter the number of elements: ";
	std::cin >> size;

	std::cout << "Enter the elements: ";
	for (int index = 0; index < size; index++) {
		std::cin >> numbers[index];
	}

	std::cout << "Enter the value to search: ";
	std::cin >> searchValue;

	for (int index = 0; index < size; index++) {
		if (numbers[index] == searchValue) {
			foundIndex = index;
			break;
		}
	}

	if (foundIndex != -1) {
		std::cout << "Value found at index " << foundIndex << ".\n";
	} else {
		std::cout << "Value not found.\n";
	}

	return 0;
}
