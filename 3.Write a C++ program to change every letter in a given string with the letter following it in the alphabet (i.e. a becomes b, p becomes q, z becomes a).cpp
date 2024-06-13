#include <iostream>
#include <string>
using namespace std ;

string change_letter(string str){
    int char_code ;
    for(int i = 0 ; i < str.length();i++){
        char_code = int(str[i]);
        
        if (char_code == 122 ){
            str[i]= char(97);
        }
        else if (char_code == 90 ){
            str[i]= char(65);
        }
        else if (char_code >= 97 && char_code<=122 || char_code >= 65 && char_code <= 90 )
        {
            str[i]= char(char_code + 1);
        }
    }
    return str;
}
int main(){
    cout<<change_letter("Rohan");
    return 0;
}
