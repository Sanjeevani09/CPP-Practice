#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter any number you want : ";
    cin>>n;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout<<" ";
        }
        for(int k = 1; k <= n; k++){
            cout<<"* ";
        }
        
        cout<<endl;
    }

    return 0;
}

// Pattern we want to print - Rhombus pattern
// Enter any number you want : 5
//  * * * * * 
//   * * * * * 
//    * * * * * 
//     * * * * * 
//      * * * * * 

// rows = 1 to n
//2 loops = one for space and one for column
//space = 1 to row number
// columns = 1 to row number
// elements = row number + col number = even no then print 1 else 0