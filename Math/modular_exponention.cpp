#include<iostream>
using namespace std;
long long int power(long long x, unsigned long long int y) 
{ 
    unsigned long long int mod=100000007,r=1;

    int res = 1;     // Initialize result 
 
    x = x % mod; // Update x if it is more than or 
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by mod;
 
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % mod; 
 
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) % mod; 
    } 
    return res; 
} 
int main(){
	cout<<power(100,100);
}
