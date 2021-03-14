// Function to swap A and B
// using pointers
void swap(int *A, int *B){
    
   int temp;
   temp=*A;
   *A=*B;
   *B=temp;
    
}

// Function to swap A and B
// using reference
void swap(int& x, int& y) 
{ 
    int z = x; 
    x = y; 
    y = z; 
} 
