
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin>>n;
    int m = n;
    int d, sum;
    int sq = n * n;
    while(sq != 0){
        d = sq % 10;
        sum = sum + d;
        sq = sq / 10;
    }
    
    if(sum == m){
        cout<<"The number "<<m<<" is a Neon number!";
    }
    else{
        cout<<"The number "<<m<<" is not a Neon number!";
    }
    
    return 0;
}


// Write a program to check whether the given number is Neon number or not
//A number is a Neon number when the sum of digits of square is equal to the number.
//Example = 9 : 9 * 9 --> 81 --> 8 + 1 = 9 
// Enter the number : 9
// The number 9 is a Neon number!
// 
// Enter the number : 56
// The number 56 is not a Neon number!

