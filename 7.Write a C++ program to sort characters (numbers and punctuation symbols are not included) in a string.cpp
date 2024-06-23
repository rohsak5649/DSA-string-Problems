#include <iostream>
#include <string>
using namespace std;

string sort_char(string text) {
    bool flag;
    char ch;
    int n = text.length();

    
    do {
        flag = false;

        for (int i = 0; i < n - 1; i++) {
            if (text[i] > text[i + 1]) {
                ch = text[i];
                text[i] = text[i + 1];
                text[i + 1] = ch;
                flag = true;
            }
        }

    } while (flag);

    string str;
    for (int j = 0; j < n; j++) {
        if (text[j] != ' ') {
            str.push_back(text[j]);
        }
    }
    return str;
}

int main() {
    cout << sort_char("rohan") << endl;
    return 0;
}
