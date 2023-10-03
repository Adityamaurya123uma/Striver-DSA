int countDigits(int n){
	// Write your code here.	
	int ans= 0;
	int mult = 1;
	while(n!=0){
		mult = mult * 10;
		int temp = n % mult;
		n = n-temp;
		ans++;
	}
	return ans;
}