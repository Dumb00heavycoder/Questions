//Make a program to check for vowels and consonant
#include <iostream>
using namespace std; 

int main () {
    char c;
    bool isuppercasevowel,islowercasevowel;
    cout << "Enter the alphabet you want to check for"<< endl;
    cin >> c;
    isuppercasevowel =(c=='A' ||c== 'E'||c=='I'||c=='O'||c=='U');
    islowercasevowel = (c=='a' ||c== 'e'||c=='i'||c=='o'||c=='u');
    if (!isalpha(c)){
        cout <<"Inappropriate input"<< endl;
    }else if(isuppercasevowel || islowercasevowel) {
        cout <<  c <<"  is a vowel"<< endl;
    }else {
        cout << c <<" is a consonent"<< endl;
    }

return 0;
}