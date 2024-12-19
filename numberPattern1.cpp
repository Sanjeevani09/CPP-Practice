#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the number : ";
    cin>>n;
    int m = n;
    
    while(n != 0){
        int rem = n % 10;
        cout<<rem<<endl;
        n = n / 10;
    }

    return 0;
}


// Write a program to print all the digits of a number on different line
// Enter any number you want : 972
// 2
// 7
// 9
