#include<bits/stdc++.h>
using namespace std;
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
int i=0;
int j=n-1;
	sort(arr,arr+n);

		while(i<j){
			int sum=arr[i]+arr[j];
			if(sum==x) return true;
			else if(sum>x)j--;
			else if(sum<x)i++;
		}
return false;
}
	    };
	    
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, x;
		cin>>n>>x;
		int arr[n];
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		solution ob;
		auto ans=ob.hasArrayTwoCandidates(arr,n,x);
		cout<<(ans ?"Yes \n": "No\n");
	}
return 0;
}
