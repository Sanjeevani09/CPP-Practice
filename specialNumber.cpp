// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the number : ";
    cin>>n;
    int m = n;
    int sum, rem, prod, special;
    while(n != 0){
        rem = n % 10;
        sum = sum + rem;
        prod = prod * rem;
        n = n / 10;
        special = sum + prod;
    }
    
    if(special == m){
        cout<<"The number "<<m<<" is a Special number!";
    }
    else{
        cout<<"The number "<<m<<" is not a Special number!";
    }

    return 0;
}


// Write a program to check whether the given number is special number or not
//A number is a special number when sum of its digit plus the product of the digits is equal to the original number.
//Example: 59 = 5 + 9 + (5 * 9)
// Enter the number : 59
// The number 59 is a Special number!
