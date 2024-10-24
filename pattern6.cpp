#include <iostream>

using namespace std;

int main() {
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        
        cout<<endl;
    }
    for(int k = 0; k < n; k++){
        for(int m = n -1 ; m > k; m--){
            cout<<"*";
        }
            cout<<endl;
        }

    return 0;
}

/*
The pattern we want to print : 
Enter the number : 6
*
**
***
****
*****
******
*****
****
***
**
*

*/
