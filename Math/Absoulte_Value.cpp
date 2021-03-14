//ABSOLUTE VALUE
int absolute(int I) {
    if(I<0){
    I=I+1000000007;
    return 1000000007%I;
        
    }
    else{
        return I%1000000007;
    }
}
