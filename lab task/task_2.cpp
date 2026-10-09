#include <iostream>
using namespace std;
int main() {
	double firstNumber;
	double secondNumber;
	char operation;

	cout << "Enter first number: ";
	cin >> firstNumber;

	cout << "Enter an operation (+, -, *, /): ";
	cin >> operation;

	cout << "Enter second number: ";
	cin >> secondNumber;

	switch (operation) {
		case '+':
			cout << "Result: " << firstNumber + secondNumber << "\n";
			break;
		case '-':
			cout << "Result: " << firstNumber - secondNumber << "\n";
			break;
		case '*':
			cout << "Result: " << firstNumber * secondNumber << "\n";
			break;
		case '/':
			if (secondNumber == 0) {
				cout << "Error: division by zero is not allowed.\n";
			} else {
				cout << "Result: " << firstNumber / secondNumber << "\n";
			}
			break;
		default:
			cout << "Error: invalid operation.\n";
	}

	return 0;
}
