#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter any number you want : ";
    cin>>n;
    
    for(int i = 1; i <= 3 ; i++){
        for(int j = 1; j <= n; j++){
            if(((i+j) % 4 == 0) || (i == 2 && j % 4 == 0)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}

// Pattern we want to print - Zig-Zag star pattern
// Enter any number you want : 20
//   *   *   *   *   * 
//  * * * * * * * * * *
// *   *   *   *   *   

// rows = 1 to n
// columns = 2 components (space and numbers )
// spaces = 1 to n - row number
// stars = multiple of 4 -> (row + column) % 4 = 0 and row = 2 and col % 4 = 0
// elements = stars