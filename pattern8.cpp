#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter any number : ";
    cin >> n;

    for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= i; j++){
            if((i + j) % 2 == 0){
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }

    return 0;
}


// Pattern we want to print - 0 - 1 Pattern

// Enter any number : 5
// 1
// 0 1 
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

// rows = 1 to n
// columns = 1 to row number
// elements = row number + col number = even no then print 1 else 0