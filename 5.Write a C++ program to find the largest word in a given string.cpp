#include <iostream>
#include <string>
using namespace std; 

string longest_word(string text) {
    string result_word, temp_str1;
    for(int i = 0; i < text.length(); i++) {
        if (text[i] != ' ' && (int(text[i]) >= 65 && int(text[i]) <= 90) || (int(text[i]) >= 97 && int(text[i]) <= 122) || (int(text[i]) >= 48 && int(text[i]) <= 57)) {
            temp_str1.push_back(text[i]);
        }
        else {
            if (temp_str1.length() > result_word.length()) {
                result_word = temp_str1;
            }
            temp_str1.clear();
        }
    }
    // Check last word
    if (temp_str1.length() > result_word.length()) {
        result_word = temp_str1;
    }
    
    return result_word;
}

int main() {
    string text = "rohan dada is mind";
    cout << "Longest word: " << longest_word(text) << endl;
    return 0;
}
