#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter any number you want : ";
    cin>>n;
    
    for(int i = 1; i <= n; i++){
        for(int j = n; j >= i; j--){
            cout<<"  ";
        }
        for(int k = 1; k <= (2 * i - 1); k++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}


// Pattern we want to print - Reverse star pattern
// Enter any number you want : 4
//        *
//      * * * 
//    * * * * *
//  * * * * * * *