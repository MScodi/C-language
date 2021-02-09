//An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself.
string armstrongNumber(int n){
    int sum=0,temp,a;
    a=n;
    while(n!=0){
    temp=n%10;
    sum=sum+(temp*temp*temp);
    n=n/10;
        }
    if(sum==a)
        return "Yes";
    else
        return "No";
    }
