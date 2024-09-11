/*
QUESTION - 

https://www.hackerrank.com/challenges/arrays-introduction/problem?isFullScreen=true

You will be given an array of N integers and you have to print the integers in the reverse order.

Input Format

The first line of the input contains ,where  is the number of integers.The next line contains N space-separated integers.

where N is the  integer in the array.

Output Format

Print the N integers of the array in the reverse order, space-separated on a single line.

CODE - 
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num;
    cin>>num;
    int arr[num];
    
    for(int i = 0; i < num; i++){
        cin>>arr[i];
    }
    
    int temp, a , b;
    for(a = 0, b = num - 1; a < num/2; a++, b--){
        temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }
    
    for(a = 0; a < num; a++){
        cout<<arr[a]<<" ";
    }
    
    return 0;
}

