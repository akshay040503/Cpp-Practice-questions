#include <iostream>
using namespace std;

// main code function for the swapping 
    void swap (int *a , int *b){
        
    int temp = *a ;
    *a = *b ;
    *b = temp;
    }

int main (){


    int a = 23;
    int b = 24;
 

     cout << "Before Swapping: " << endl;
    cout << " a: " << a << " b: " << b << endl;

    // calling swap
   swap(&a, &b);

    cout << "After Swapping: " << endl;
    cout << " a: " << a << " b: " << b << endl;

    return 0;
}