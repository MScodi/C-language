#include<iostream>
using namespace std;
void merge(int arr1[], int arr2[], int n, int m) 
{ 
   int x= n-1 , y=0;
   while(x>=0 && y<m){
       if(arr1[x]>=arr2[y]){
           swap(arr1[x],arr2[y]);
           x--;
           y++;
   }
   else{
       x--;
   }
        
    }
    sort(arr1 , arr1+n);
    sort(arr2 , arr2+m);
} 
int main(){

    int a1[] = { 10, 27, 38, 43, 82 };
    int a2[] = { 3, 9 };
    int n = sizeof(a1) / sizeof(int);
    int m = sizeof(a2) / sizeof(int);
 
    // Function Call
    merge(a1, a2, n, m);
 
    printf("First Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a1[i]);
 
    printf("\nSecond Array: ");
    for (int i = 0; i < m; i++)
        printf("%d ", a2[i]);
    printf("\n");
    return 0;
}	
}
