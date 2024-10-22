#include <iostream>

using namespace std;

int main() {
    int n;
    cout<<"Enter the number of lines : ";
    cin>>n;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            if(i % 2 == 0){
                cout<<"#";
            }
            else{
                cout<<"&";
            }
        }
        cout<<endl;
    }

    return 0;
}


/*

Pattern we want to print - 

Enter the number of lines : 9
&
##
&&&
####
&&&&&
######
&&&&&&&
########
&&&&&&&&&


*/
