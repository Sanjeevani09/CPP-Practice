// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin>>n;
    int m = n;
    int rem, d, sum;
    
    while(n != 0){
        d = n % 10;
        int fact = 1;
        for(int i = 1; i<= d; i++){
            fact = fact * i;
            sum = sum + fact;
        }
        n = n / 10;
    }
    
    if(sum == m){
        cout<<"The number "<<m<<" is a KrishnaMurty number!";
    }
    else{
        cout<<"The number "<<m<<" is not a KrishnaMurty number!";
    }

    return 0;
}


// Write a program to check if a number is a KrishnaMurty number or not
// The number is called KrishnaMurty number if the sum od factorial of digits is equal to the number
//Example - 145 --> 1! + 4! + 5! --> 1 + 24 + 120 = 145

// Enter the number : 145
// The number 145 is a KrishnaMurty number!

// Enter the number : 120
// The number 120 is not a KrishnaMurty number!


