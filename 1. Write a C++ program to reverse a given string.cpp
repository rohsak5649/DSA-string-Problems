#include <iostream>
#include <string>

using namespace std;

int main() {
    // Ask the user to input a string
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);

    // Reverse the string using std::swap function
    int n = inputString.length();
    for (int i = 0; i < n / 2; ++i) {
        swap(inputString[i], inputString[n - i - 1]);
    }

    // Output the reversed string
    cout << "Reversed string: " << inputString << endl;

    return 0;
}
