// WAP to find the size of given data type : 

#include <iostream>
using namespace std;


int main (){

    int integerType;
    float floatType;
    char charType;
    double doubleType;

    //here we will use sizeOf()

    cout << "Size of datatype int is : "<< sizeof(integerType)<< "\n";
    cout << "Size of datatype float is : "<< sizeof(floatType)<< "\n";
    cout << "Size of datatype char is : "<< sizeof(charType)<< "\n";
    cout << "Size of datatype double is : "<< sizeof(doubleType)<< "\n";
    return 0;
}