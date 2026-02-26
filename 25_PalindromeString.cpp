// Write a program to find whether a string is a palindrome or not
#include <bits/stdc++.h>
using namespace std;

void isPalindrome(string str){

    string rev = str;
    reverse(rev.begin(), rev.end());

    if (str == rev){
        cout << "\"" << str <<  " is a palindrome" << endl;
    }else 
    cout << "\"" << str << " is not a palindrome."<< endl;
}

int main (){


    isPalindrome("naman"); // Output :  naman is a palindrome.
    isPalindrome("ABCD"); // Output : ABCD is not a palindrome.

    return 0;
}