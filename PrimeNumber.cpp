#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin>>n;
    
    bool flag = 0;
    
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            cout<<"The number "<<n<<" is not a prime number."<<endl;
            flag = 1;
            break;
        }
    }
    
    if(flag == 0){
        cout<<"The number "<<n<<" is a prime number."<<endl;
    }

    return 0;
}


// Enter the number : 131
// The number 131 is a prime number.
// Enter the number : 4
// The number 4 is not a prime number.