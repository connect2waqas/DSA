// Creates an email address from a first name, last name, and domain.

#include <iostream>
#include <string>

int main() {
    std::string firstName;
    std::string lastName;
    std::string domain;

    std::cout << "Enter your first name: ";
    std::cin >> firstName;

    std::cout << "Enter your last name: ";
    std::cin >> lastName;

    std::cout << "Enter your email domain (for example, gmail.com): ";
    std::cin >> domain;

    std::cout << "Your email address is: "
              << firstName << "." << lastName << "@" << domain << "\n";

    return 0;
}


