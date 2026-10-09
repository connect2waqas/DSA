#include <iostream>
using namespace std;

int main(){
	int numbers[100];
	int size;
	int searchvalue;
	int foundIndex = -1;

	cout << "Enter the number of elements: ";
	cin >> size;
	cout << "Enter the elements: ";
	for (int index = 0; index < size; index++){
		cin >> numbers[index];
	}
	cout << "Enter the number to be Search: ";
	cin >> searchvalue;
	for (int index=0; index < size; index++) {
		if (numbers[index] == searchvalue){
			foundIndex = index;
			break;
		}
	}
	
	if (foundIndex != -1){
		cout << "value found at index" << foundIndex << "\n";
	}else {
		cout << "Value not found";
	}
}