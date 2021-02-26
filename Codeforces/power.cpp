#include<iostream>
using namespace std;
int power(int a, int b){
	int res=1;
	if(b==0){
		return 1;
	}
	else{
		if(b&1){
			res=a*power(a,b-1);
			return res;
		}
		else{
		
			res=power(a,b/2);
			return res*res;
		}
	}
	}

int main(){
	cout<<power(2,8);
	
	return 0;
}
