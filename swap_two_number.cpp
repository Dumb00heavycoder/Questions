//Q- Make a C++ Program to Swap Two Numbers using call by reference
#include <iostream>
using namespace std; 


    void swap(int &a, int &b) {
        int temp;
        temp = a;
         a= b;
         b= temp; }

    int main() {
        int x,y;
        cout << "Enter the value of x "<< endl;
        cin >> x;
        cout << "Enter the value of y "<< endl;
        cin >> y;
        cout << "The value of x before swap is "<< x << endl <<"The value of y before swap is "<< y<< endl;
        swap(x,y); 
        cout <<"The value of x after swap is "<< x << endl<<"The value of y after swap is "<< y << endl;
        return 0;
        
    }

