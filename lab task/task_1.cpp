// Creates an email address from a first name, last name, and domain.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName;
    string lastName;
    string domain;

    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;
    cout << "Enter your email domain (for example, gmail.com): ";
    cin >> domain;
    cout << "Your email address is: "
            << firstName << "." << lastName << "@" << domain << "\n";

    return 0;
}


