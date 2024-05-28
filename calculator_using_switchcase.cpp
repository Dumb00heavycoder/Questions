//This problem is taken from programiz.com 
//from examples in section of looops and structures
#include <iostream>
using namespace std;

int main() { 
    int a,b;
    char c;
    cout << "Enter your first number"<< endl;
    cin >> a;
    cout <<"Enter your operater (+, -, *, /)"<< endl;
    cin >> c;
    cout <<"Enter your second number"<< endl;
    cin >> b;
    switch (c)
    {
    case '+':
        cout << "Your answer is " << a + b << endl;
        break;
    case '-':
        cout << "Your answer is " <<a-b<< endl;
        break;
    case '*':
        cout << "Your answer is " <<a*b << endl;
        break;
    case '/':
        cout << "Your answer is " <<a/b << endl;
        break;
    
    default:
        cout << "The operator is not valid"<< endl;
        break;
    } 
        
    
    return 0;
}