#include <iostream>
#include <string>
using namespace std ;
 
string caplet(string text){
    for (int i = 0 ; i < text.length(); i++){
        if (i == 0 || text[i-1]== ' '){
            text[i] = toupper(text[i]);
        }
    }
   return text; 
}
int main(){
    cout<<caplet("rohan avinash sakhare");
}
