class Solution {
public:
    int reverse(int x) {
        long ans = 0;
        while(x!=0){
            if (ans > INT_MAX/10 || ans < INT_MIN/10) return 0;
            int temp = x%10;
            ans = ans*10 + temp;
            x=x/10;
        }
        return int(ans);
    }
};