vector<int> printDivisors(int n) {
    vector<int> ans;

    for(int i=1;i<=n/2;i++){
        if (n%i==0){
            ans.push_back(i);
        }
    }
    ans.push_back(n);
    return ans;
}