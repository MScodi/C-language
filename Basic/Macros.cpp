
#include <bits/stdc++.h>
#define MULTI(a,b) (a*b)  //The multiplication macro function.
                                /*Whenever MULTI(a,b) is encountered, it is replaced by (a*b) during the preprocessing stage*/
using namespace std;

void macros(int a,int b);



void macros(int a,int b)
{ int value;
    value= MULTI(a,b);
    cout<<value;
    cout<<endl;
}



int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b; //Input a and b
	    macros(a,b);
	    
	}
	return 0;
