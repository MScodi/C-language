//Merge Sort is a Divide and Conquer algorithm. It divides the input array into two halves, calls itself for the two halves, and then merges the two sorted halves.
// The merge() function is used for merging two halves. The merge(arr, l, m, r) is a key process that assumes that arr[l..m] and arr[m+1..r] are sorted and merges 
//the two sorted sub-arrays into one.

#include <iostream>
#include<math.h>
using namespace std;
 //TO merge we create atemporary array to store left and right partition
void merge(int a[],int begin, int mid,int end ){
	int n1,n2;
	int l,r,k;
	n1=mid-begin+1;					// array size for left partition
	n2=end-mid;						//	right array size
	int left[n1],right[n2];
	// NOW ADD elements into these arrays
	
	for(int i=0; i<n1; i++ )
		left[i]=a[begin+i];				// begin->mid
	for(int i=0; i<n2; i++ )				//mid+1->end
		right[i]=a[mid+1+i];
	
	// It's time to merge this arrays by comapring elements one by one and overwrite a elemnts in original array
	
	k=begin;
	l=0;
	r=0;
	while(l<n1 && r<n2){
		if(left[l]<right[r]){				// element in left array is small so write to  original array
		a[k]=left[l];
		l++;
		k++;
			}
		else{
			a[k]=right[r];
			r++;
			k++;
		}
	}
	
	// Now we have to takcare of any elements left in any arrays by these 2 loops
	while(l<n1)								// run if element present in left one
	{
		a[k]=left[l];									//copy all of them into main array
		l++;
		k++;
		}	
	while(r<n1)								// run if element present in right one
	{
		a[k]=right[r];									//copy all of them into main array
		r++;
		k++;
		}	
	
}
void mergesort(int a[],int begin, int end){
	if(begin>=end){
	return ; }
	
	int mid=floor((begin+end)/2);
	mergesort(a,begin, mid);								// DIVIDING ARRAY INTO HALF ARRAY
	mergesort(a,mid+1,end);
	merge(a,begin,mid,end);
}

void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
}

int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
 
    cout << "Given array is \n";
    printArray(arr, arr_size);
 
    mergesort(arr, 0, arr_size - 1);
 
    cout << "\nSorted array is \n";
    printArray(arr, arr_size);
    return 0;
}
