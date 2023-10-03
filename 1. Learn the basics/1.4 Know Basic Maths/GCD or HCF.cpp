// Brute Force

int calcGCD(int n, int m){
    int ans = 0;
    for(int i=1;i<=min(n,m);i++){
        if(n%i == 0 && m%i == 0){
            ans = i;
        }
    }
    return ans;
}

// Approach Two : Recursion
// Using Euclidean’s theorem.

int gcd(int a, int b){
    if (b==0) return a;
    return gcd(b,a%b);
}

int calcGCD(int n,int m){
    return gcd(n, m);
}