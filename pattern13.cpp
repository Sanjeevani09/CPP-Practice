#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter any number you want : ";
    cin>>n;
    
    for(int i = 1; i <= n; i++){
        for(int j = n; j >= i; j--){
            cout<<" ";
        }
        for(int k = i; k >= 1; k--){
            cout<<k<<" ";
        }
        
        cout<<endl;
    }

    return 0;
}

// Pattern we want to print - Palindromic pattern
// Enter any number you want : 5
//      1 
//     2 1 
//    3 2 1 
//   4 3 2 1 
//  5 4 3 2 1 