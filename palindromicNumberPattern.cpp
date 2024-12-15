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
        for(int k = i; k >= 1; k--){
            cout<<k<<" ";
        }
        for(int m = 2; m <= i; m++){
            cout<<m<<" ";
        }
        
        cout<<endl;
    }

    return 0;
}


// Pattern we want to print - Palindromic pattern
// Enter any number you want : 5
//        1
//      2 1 2
//    3 2 1 2 3 
//  4 3 2 1 2 3 4
//5 4 3 2 1 2 3 4 5

// rows = 1 to n
// columns = 3 components (space,numbers in decreasing order and numbers in increasing order)
// spaces = 1 to n - row number
// numbers in decreasing order = n to i
// numbers in increasing order = print row number
// elements = numbers

                //OR


#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter any number you want : ";
    cin>>n;
    
    for(int i = 1; i <= n; i++){
        int j;
        for(j = 1; j <= n-i; j++){
            cout<<"  ";
        }
        int k = i;
        for(; j <= n; j++){
            cout<<k--<<" ";
        }
        k=2;
        for(;j <= n+i-1; j++){
            cout<<k++<<" ";
        }
        
        cout<<endl;
    }

    return 0;
}

// Pattern we want to print - Palindromic pattern
// Enter any number you want : 5
//        1
//      2 1 2
//    3 2 1 2 3 
//  4 3 2 1 2 3 4
//5 4 3 2 1 2 3 4 5

