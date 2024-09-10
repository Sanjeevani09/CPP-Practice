/*
QUESTION - 
https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true

In this challenge, you will use a for loop to increment a variable through a range.

Input Format

You will be given two positive integers,  and  (), separated by a newline.

Output Format

For each integer N in the inclusive interval [a,b]:

If 1<n<9, then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if n>9 and it is an even number, then print "even".
Else if n>9 and it is an odd number, then print "odd".
Note: 

Sample Input

8
11
Sample Output

eight
nine
even
odd

CODE - 
*/

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    int a, b;
    cin>>a>>b;
    
    for(int i = a; i <= b; ++i){
        if(i >= 1 && i<=9){
            switch(i){
                case 1 : cout<<"one"<<endl;
                break;
                
                case 2 : cout<<"two"<<endl;
                break;
                
                case 3 : cout<<"three"<<endl;
                break;
                
                case 4 : cout<<"four"<<endl;
                break;
                
                case 5 : cout<<"five"<<endl;
                break;
                
                case 6 : cout<<"six"<<endl;
                break;
                
                case 7 : cout<<"seven"<<endl;
                break;
                
                case 8 : cout<<"eight"<<endl;
                break;
                
                case 9 : cout<<"nine"<<endl;
                break;
            }
        }
        
        else if(i > 9){
                if(i % 2 == 0){
                    cout<<"even"<<endl;
                }
                else{
                    cout<<"odd"<<endl;
                }
            }
    }
    
    
    return 0;
}
