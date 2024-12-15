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
        for(int k = 1; k <= i; k++){
            cout<<k<<" ";
        }
        
        cout<<endl;
    }

    return 0;
}

// Pattern we want to print - Number Hill pattern
// Enter any number you want : 5
//      1
//     1 2
//   1 2 3 
//   1 2 3 4
//  1 2 3 4 5

// rows = 1 to n
// columns = 2 components (space and numbers)
// spaces = 1 to n - row number
// numbers = print row number
// elements = numbers

                            //OR


using namespace std;
int main() {
    int n;
    cout << "Enter any number you want : ";
    cin>>n;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            cout<<" ";
        }
        for(int k = 1; k <= i; k++){
            cout<<k<<" ";
        }
        
        cout<<endl;
    }

    return 0;
}