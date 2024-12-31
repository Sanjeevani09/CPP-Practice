#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cout <<"Enter the number : ";
    cin>>n;
    int m = n;
    int sum, dig;
    
    while(n > 0){
        dig = n % 10;
        sum = sum +(pow(dig,3));
        n = n / 10;
    }
    
    if(sum == m){
        cout<<"The number "<<m<<" is an Armstrong number.";
    }
    else{
        cout<<"The number "<<m<<" is not an Armstrong number.";
    }

    return 0;
}

// Enter the number : 153
// The number 153 is an Armstrong number.

// Enter the number : 121
// The number 121 is not an Armstrong number.
