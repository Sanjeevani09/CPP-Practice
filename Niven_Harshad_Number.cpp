#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin>>n;
    int m = n;
    int rem = 0;
    while(n != 0){
        n = n % 10;
        rem = rem + n;
        n = n / 10;
    }
    
    if(m % rem != 0){
        cout<<"The number "<<m<<" is not a Niven/Harshad number!";
    }
    else{
        cout<<"The number "<<m<<" is a Niven/Harshad number!";
    }

    return 0;
}


// Write a program to check whether the given number is Niven/Harshad number or not
//A number is a Niven/Harshad number when it is divisible bt the sum of its digit.
//Example = 156 : 1 + 5 + 6 = 12 
// Enter the number : 156
// The number 156 is a Niven/Harshad number!
//
// Enter the number : 12
// The number 12 is a Niven/Harshad number!

// Enter the number : 419
// The number 419 is not a Niven/Harshad number!
