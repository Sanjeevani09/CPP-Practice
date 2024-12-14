#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter any number : ";
    cin >> n;

    for(int i = 1; i <= n ; i++){
        for(int j = 1; j <= n+1-i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}

//LOGIC 
// rows = 1 to n
// coumns = n + 1 - row number
// elements = column number


                    OR 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter any number : ";
    cin >> n;

    for(int i = 1; i <= n ; i++){
        for(int j = n, count = 1; j >= i; j--, count++){
            cout<<count<<" ";
        }
        cout<<endl;
    }

    return 0;
}


// Pattern we want to print - Inverted number pattern

// Enter any number : 5
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3 
// 1 2 
// 1

