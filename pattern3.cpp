// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    int num;
    cout<<"Enter the number of lines : ";
    cin>>num;
    
    for(int i = 1; i <= num; i++){
        for(int j = num; j > i; j--){
            cout<<" ";
        }
        for(int k = 1; k <= i; k++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}


/*
pattern we want to print -

Enter the number of lines : 5
    *
   **
  ***
 ****
*****

*/