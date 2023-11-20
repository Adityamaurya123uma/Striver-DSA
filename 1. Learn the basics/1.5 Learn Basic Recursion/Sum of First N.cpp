// using recursion

long long sumFirstN(long long n) {
    int sum = 0;
    if(n==0){
        return 0;
    } else if(n==1){
        return 1;
    } else {
        return n + sumFirstN(n-1);
    }  
}


// using formula/math


long long sumFirstN(long long n){
    return (n*(n+1))/2;
}