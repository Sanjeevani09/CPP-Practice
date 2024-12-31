#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin>>n;
    int m = n;
    int rev;
    
    
    while(n > 0){
        int dig = n % 10;
        rev = (rev * 10) + dig;
        n = n / 10;
    }
    
    cout<<"The reverse of number "<<m<<" is "<<rev;
    

    return 0;
}


// Enter the number : 564
// The reverse of number 564 is 465

// Enter the number : 987654
// The reverse of number 987654 is 456789