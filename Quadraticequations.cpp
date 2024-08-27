#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int a,b,c,r1,r2,des,div;
    cout <<"Enter a, b and c in order of ax^2+bx+c"<< endl;
    cin >> a >> b >> c;
    des = (b*b) - (4*a*c);
    div = 2*a;
    if (des > 0){
        r1 = (-b + sqrt(des))/div;
        r2 = (-b - sqrt(des))/div;
        cout <<"The roots of the quadratic equation are "<< r1 << " and "<< r2 << endl; 
    } else if (des == 0){
        r1 = -b/div;
        r2 = r1;
        cout <<"The roots of the quadratic equation are "<< r1 <<" and "<< r2 << endl;
    }else  {
        cout << "The quadratic equation has unreal roots"<< endl;
    }
    
    return 0;
}