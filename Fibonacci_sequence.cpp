#include <iostream>
using namespace std; 

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2)+fib(n-1);
}

int main () {
    int num;
    cout<<"Enter the digit you want to know of the Fibonacci sequence "<<endl;
    cin >> num;
    if(num<4){
    cout <<"The value of the"<< num<< "rd digit in FIbonacci sequence is "<< fib(num)<< endl;
    }else {
        cout <<"The value of the"<< num<< "th digit in FIbonacci sequence is "<< fib(num)<< endl;
    }


return 0;
}