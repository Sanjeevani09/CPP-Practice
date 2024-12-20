#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin>>n;
    int m = n;
    int flag = 0;
    int sq = n * n;
    
    int d, d1;
    
    while(n != 0){
        d = n % 10;
        d1 = sq % 10;
        if(d != d1){
            flag = 1;
        }
        n = n / 10;
        sq = sq / 10;
    }
    
    if(flag == 0){
        cout<<"The number "<<m<<" is a Automorphic number!";
    }
    else{
        cout<<"The number "<<m<<" is not a Automorphic number!";
    }
    
    return 0;
}


// Write a program to check whether the given number is Automorphic number or not
//A number is a Automorphic number when the number is contained in the last digit(s) of its square.
//Example = 25: 25 * 25 --> 625 --> 25
//OUTPUT - 
// Enter the number : 6
// The number 6 is a Automorphic number!
// 
// Enter the number : 25
// The number 25 is a Automorphic number!

// Enter the number : 11
// The number 11 is not a Automorphic number!

