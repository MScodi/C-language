#include<iostream>
 using namespace std;
 int makeProductOne(int arr[], int N) {
       int counter=0;
      int neg=0,zero=0;
       for(int i=0;i<N;i++)
       {
           if(arr[i]>0)
           {
               counter+=arr[i]-1;
              
           }
           else if(arr[i]<0)
           {
                   neg+=1;
               counter+=abs(arr[i]+1);
              
           }
           else if(arr[i]==0)
           {
               zero+=1;
           }
    
           
       }
       if(neg%2!=0)
       {
           if(zero==0){
           counter+=2;
               
           }
           counter+=zero;
       }
       else
       {
           counter+=zero;
       }
       
           return counter;
       
    
    } 
int main(){
	int a{1,2,3,-1,4};
cout<<makeProductOne(a,5); 	
 	
 }
