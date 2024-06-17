#include <iostream>
#include <string>

bool checkSeparation(const std::string &str) {
    for (size_t i = 0; i < str.length() - 3; ++i) {
        if ((str[i] == 'e' && str[i + 3] == 'g') || (str[i] == 'g' && str[i + 3] == 'e')) {
            return true;
        }
    }
    return false;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (checkSeparation(input)) {
        std::cout << "The characters 'e' and 'g' are separated by exactly 2 places in the string.\n";
    } else {
        std::cout << "The characters 'e' and 'g' are NOT separated by exactly 2 places in the string.\n";
    }

    return 0;
}
