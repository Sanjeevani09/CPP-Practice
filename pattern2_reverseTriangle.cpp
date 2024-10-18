#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter number of lines of star : ";
    cin>>n;

    for(int i = 0; i < n; i++){
        for(int j = n; j > i; j--){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}

/*
Pattern we want to print - 

Enter number of lines of star : 5

*****
****
***
**
*

*/