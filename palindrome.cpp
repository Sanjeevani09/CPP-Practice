/*
QUESTION -
https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/

CODE - 
*/
#include <iostream>
using namespace std;
int main() {
	string s;
	cin >> s;    //Reading input from STDIN
	string rev = "";

	for(int i = s.length() - 1; i >= 0 ; i--){
		rev = rev + s.at(i);
	}

	if(s == rev){
		cout<<"YES";
	}
	else{
		cout << "NO";
	}
		// Writing output to STDOUT
}
