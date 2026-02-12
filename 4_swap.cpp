#include <iostream>
using namespace std;

//  Write a Program to Swap Two Numbers.
int main (){
    int a = 12; 
    int b = 13;
    int temp;

    temp = a;
    a = b;
    b = temp;

    cout << "Value of a is : " << a << endl;  
    cout << "Value of b is: " << b << endl;

    return 0;
}