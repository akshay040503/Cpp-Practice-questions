#include <iostream>
using namespace std;

int main (){
    
    for(int i = 0; i <= 5 ; i++){
        for(int space = 1; space <= 5 - i; space ++){
            cout << " ";
        }
        for(int star =1; star<= 2*i - 1; star++){
            cout << "*";
        }
        cout << endl;
    }


    return 0;
}