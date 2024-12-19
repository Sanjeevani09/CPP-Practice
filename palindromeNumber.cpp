#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the number : ";
    cin>>n;
    int m = n;
    int num, rem;
    while(n != 0){
        rem = n % 10;
        num = (num * 10) + rem;
        n = n / 10;
    }
    
    if(num == m){
        cout<<"The number "<<m<<" is a Palindrome number!";
    }
    else{
        cout<<"The number "<<m<<" is not a Palindrome number!";
    }

    return 0;
}


// Write a program to check whether the givern number is palindrome or not
// Enter the number : 1221
// The number 1221 is a Palindrome number!
