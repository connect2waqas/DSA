#include <iostream>
using namespace std;

int main() {
	int first_number;
	int second_number;
	char operation;
	
	cout << "Enter first number: ";
	cin >> first_number;
	cout << "Enter second number: ";
	cin >> second_number;
	cout << "Enter operation: ";
	cin >> operation;

	switch (operation){
		case '+':
		cout << "Result = " << first_number + second_number <<"\n";
		break;
		case '-':
		cout << "Result = " << second_number - first_number <<"\n";
		break;
		case '*':
		cout << "Multiplication: " << first_number * second_number << "\n";
		break;
		case '/':
		if (second_number == 0){
			cout << "Division by Zero are not allowed\n";

		}
		else {
			cout << "Division = "<< first_number / second_number << "\n";
		}
		break;
		default:
		cout << "invalid operation\n";

	}
}