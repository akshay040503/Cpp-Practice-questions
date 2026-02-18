#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int fib(int n ){

    if (n <= 1)
            return n;
    return fib(n - 1) + fib (n - 2);
        
    }
int main (){
    
    // Code to print fibonacci series
      /*int a = 0, b = 1, n;

    cout << "Enter a number: ";
    cin >> n;
 
    for (int i = 0; i < n; i++){
        cout << a << " ";
        int temp = a+b;
        a = b ;
        b = temp;
    }

    return 0;*/

    int n = 45; 
    cout << fib(n);
    return 0 ;
}