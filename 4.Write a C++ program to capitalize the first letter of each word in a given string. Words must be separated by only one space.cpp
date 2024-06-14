#include <iosteram>
#include <string>
using namespace std ;
string cap_first_letter(string text){
    for (int i = 0 ; i<text.length() ; i++){
        
        if ( i==0 || text[i-1]==''){
            text[i] = toupper(text[x]);
        }
    }
    return text;
}
int main(){
    cout<<cap_first_letter("rohan sakhre");
}
