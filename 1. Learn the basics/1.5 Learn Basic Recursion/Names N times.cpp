vector<string> printNTimes(int n) {
	vector<string> ans;
	if(n<1) return ans;
	ans = printNTimes(n-1);
	ans.push_back("Coding Ninjas");
	return ans;
}