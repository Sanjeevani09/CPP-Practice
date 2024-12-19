#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the number : ";
    cin>>n;
    int m = n;
    int sum, rem, prod;
    while(n != 0){
        rem = n % 10;
        sum = sum + rem;
        prod = prod * rem;
        n = n / 10;
    }
    
    if(sum == prod){
        cout<<"The number "<<m<<" is a Spy number!";
    }
    else{
        cout<<"The number "<<m<<" is not a Spy number!";
    }

    return 0;
}


// Write a program to check whether the given number is spy number or not
//A number is a spy number when sum of its digit equals the product of the digit.
//Example = 123 : 1 + 2 + 3 = 1 * 2 * 3 = 6
// Enter the number : 123
// The number 123 is a Spy number!
