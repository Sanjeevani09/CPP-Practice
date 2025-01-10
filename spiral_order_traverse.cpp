// Spiral Order Matrix Traversal
#include <iostream>

using namespace std;

int main() {
    int n,m;
    cout << "Enter the row number : ";
    cin >> n;
    cout << "Enter the column number : ";
    cin >> m;
    
    int arr[n][m];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>arr[i][j];
        }
    }

    cout << "The actual array is: "<<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int row_start = 0, row_end = n - 1, column_start = 0, column_end = m - 1;
    cout<<"Spiral Order of the above matrix is : "<<endl;
    
    while(row_start <= row_end && column_start <= column_end){
        //for row start - Traverse from left to right on the top row
        for(int col = column_start; col <= column_end; col++){
            cout << arr[row_start][col] << " ";
        }
        cout<<endl;
        row_start++;  // Move the top boundary down
        
        //for column end - Traverse from top to bottom on the right column
        for(int row = row_start; row <= row_end; row++){
            cout << arr[row][column_end] << " ";
        }
        cout<<endl;
        column_end--;  // Move the right boundary left
        
        if (row_start <= row_end) {  // Check if there are still rows left
            //for row end - Traverse from right to left on the bottom row
            for(int col = column_end; col >= column_start; col--){
                cout << arr[row_end][col] << " ";
            }
            cout<<endl;
            row_end--;  // Move the bottom boundary up
        }
        
        if (column_start <= column_end) {  // Check if there are still columns left
            //for column start - Traverse from bottom to top on the left column
            for(int row = row_end; row >= row_start; row--){
                cout << arr[row][column_start] << " ";
            }
            cout<<endl;
            column_start++;  // Move the left boundary right
        }
    }
    
    return 0;
}

/*
OUTPUT : 
Enter the row number : 5
Enter the column number : 5
Enter the number of array: 1 2 3 4 5
6 9 8 7 0
7 4 1 0 2
5 8 9 6 3
9 5 1 7 3
The actual array is: 
1 2 3 4 5 
6 9 8 7 0 
7 4 1 0 2 
5 8 9 6 3 
9 5 1 7 3

Spiral Order of the above matrix is : 
1 2 3 4 5 
0 2 3 3 
7 1 5 9 
5 7 6 
9 8 7 
0 6 
9 8 
4 
1

ORDER OF TRAVERSING
------->
^----->|
|^--->||
||<--V||
|<----V|
<------V
*/