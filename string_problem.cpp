/*
QUESTION - 

https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=true

Input Format

You are given two strings,  and , separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

Output Format

In the first line print two space-separated integers, representing the length of  and  respectively.
In the second line print the string produced by concatenating a and b (a+b).
In the third line print two strings separated by a space, a and b. a and b are the same as a and b, respectively, except that their first characters are swapped.

Sample Input

abcd
ef
Sample Output

4 2
abcdef
ebcd af

CODE - 
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string a , b;
    cin>>a;
    cin>>b;
    
    int lenA = a.size();
    int lenB = b.size();
    
    cout<< lenA << " " << lenB<<endl;
    cout<< a + b << endl;
    
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout<< a << " " << b << endl;

    return 0;
}
