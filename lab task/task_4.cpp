#include <iostream>

int main() {
	int numbers[100];
	int size;

	std::cout << "Enter the number of elements: ";
	std::cin >> size;

	std::cout << "Enter the elements: ";
	for (int index = 0; index < size; index++) {
		std::cin >> numbers[index];
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

	std::cout << "Ascending order: ";
	for (int index = 0; index < size; index++) {
		std::cout << numbers[index] << " ";
	}

	std::cout << "\nDescending order: ";
	for (int index = size - 1; index >= 0; index--) {
		std::cout << numbers[index] << " ";
	}

	std::cout << "\n";
	return 0;
}
