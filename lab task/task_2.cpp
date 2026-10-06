#include <iostream>

int main() {
	double firstNumber;
	double secondNumber;
	char operation;

	std::cout << "Enter first number: ";
	std::cin >> firstNumber;

	std::cout << "Enter an operation (+, -, *, /): ";
	std::cin >> operation;

	std::cout << "Enter second number: ";
	std::cin >> secondNumber;

	switch (operation) {
		case '+':
			std::cout << "Result: " << firstNumber + secondNumber << "\n";
			break;
		case '-':
			std::cout << "Result: " << firstNumber - secondNumber << "\n";
			break;
		case '*':
			std::cout << "Result: " << firstNumber * secondNumber << "\n";
			break;
		case '/':
			if (secondNumber == 0) {
				std::cout << "Error: division by zero is not allowed.\n";
			} else {
				std::cout << "Result: " << firstNumber / secondNumber << "\n";
			}
			break;
		default:
			std::cout << "Error: invalid operation.\n";
	}

	return 0;
}
