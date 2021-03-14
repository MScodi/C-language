#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	// start from 2nd element
	for(int i=1; i<n ;i++){
		cin>>arr[i];
	}
	for(int i=1; i<n ;i++){
		int current =arr[i]; // storing current element
		int j=i-1;
		while(arr[j]>current && j>=0){
			arr[j+1]=arr[j];				// loops swap elements
			j--;
		}
		arr[j+1]=current;					// this place element to it's actual position in sorted array.
	}
	
for (i = 0; i < n; i++) 
        cout << arr[i] << " "; 
    cout << endl;
}
// Fastest 3 Horses
