#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin>>n;
    int m = n;
    int d;
    int count = 0;
    while(n != 0){
        d = n % 10;
        if(d == 0){
            count++;
        }
        n = n / 10;
    }
    
    if(count > 0){
        cout<<"The number "<<m<<" is a Duck number!";
    }
    else{
        cout<<"The number "<<m<<" is not a Duck number!";
    }
    
    return 0;
}


// Write a program to check whether the given number is Duck number or not
//A number is a Duck number when it has zero(s) present in it.
//Example = 402, 280 
// Enter the number : 12001
// The number 12001 is a Duck number!
//
// Enter the number : 204
// The number 204 is a Duck number!

// Enter the number : 123
// The number 123 is not a Duck number!
