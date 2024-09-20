/*
QUESTION - 
https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-factorial/

CODE - 
*/

#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	int fact = 1;

	for(int i = 1; i <= num; i++){
		fact = fact * i;
	}
	cout << fact << endl;	// Writing output to STDOUT
}
