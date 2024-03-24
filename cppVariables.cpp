#include <iostream>

int main() {
    std::string name = "Joshua"; // use std::string for strings
    std::string hobby = "coding"; // it's better to capitalize the first letter of constants
    int currentYear = 2024; // follow naming conventions for variables

    std::cout << name << " is a fan of " << hobby << ". In the year "
              << currentYear << " he will be able to code for even longer.\n";
    // don't forget to use "<<" to concatenate the output
}
