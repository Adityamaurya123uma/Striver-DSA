vector<int> printNos(int x) {
    vector<int> ans;
    if(x<1) return ans;
    int ans = printNos(x-1);
    ans.push_back(ans);
    return ans;
}