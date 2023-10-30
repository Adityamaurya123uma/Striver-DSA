bool checkArmstrong(int n){
    int num = n;
    int sum = 0;
    while(n>0){
        int ld = n%10;
        sum=sum+(ld*ld*ld);
        n=n/10;
    cout<<sum<<" ";
    }
    if(sum == num){
        return true;
    }
    return false;
	
}
