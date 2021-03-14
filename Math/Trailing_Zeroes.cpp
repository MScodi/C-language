#include<iostream>
using namespace std;
// find trailing Zeroes in factorial
int trail(int n){
	if(n<5)
		return 0;
	return (n/5)+trail(n/5);
}
int main(){
    cout<<trail(5);
}

// Next Level
//https://practice.geeksforgeeks.org/problems/smallest-factorial-number5929/1#
