// Online C++ compiler to run C++ program online
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
    
    for(int i = n; i >= 1; i--){
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


// Pattern we want to print - Diamond star pattern
// Enter any number you want : 4
//        *
//      * * * 
//    * * * * *
//  * * * * * * *
//  * * * * * * * 
//    * * * * * 
//      * * *
//        *

// rows = 1 to n
// columns = 2 components (space,numbers in decreasing order and numbers in increasing order)
// spaces = 1 to n - row number
// stars = 1 to 2 * row number
// stars = 2*row no. - 1
// elements = stars