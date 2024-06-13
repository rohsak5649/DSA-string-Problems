#include <iostream>
#include <string>

int main() {
    std::string str;
    int length = 0;

    std::cout << "Enter a string: ";
    std::getline(std::cin, str);  // Read a line of input from the user

    // Loop through the string until the end is encountered
    while (str[length] != '\0') {
        length++;
    }

    std::cout << "The length of the string is: " << length << std::endl;

    return 0;
}
