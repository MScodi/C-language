//https://www.geeksforgeeks.org/given-sorted-array-number-x-find-pair-array-whose-sum-closest-x/
#include<iostream>
using namespace std;
void printClosest(int arr,int n ,int x){
	int sum=0;
	int res_l,res_r;
	int i=0,j=n-1;
	sort(arr,arr+n);
	while(i<j){
		if(abs(arr[i]+arr[j]-x)<diff){
			res_l=i;
			res_r=j;
			diff=abs(arr[i]+arr[j]-x);
		}
		if(arr[i])+arr[j]>x)
			j--;
		else
			i++;
}
	    cout <<" The closest pair is " << arr[res_l] << " and " << arr[res_r]; 

	
}

int main() 
{ 
    int arr[] =  {10, 22, 28, 29, 30, 40}, x = 54; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    printClosest(arr, n, x); 
    return 0; 
}
