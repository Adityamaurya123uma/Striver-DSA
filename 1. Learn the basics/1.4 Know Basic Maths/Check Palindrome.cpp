class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int temp = x;
        long num = 0;
        while(temp > 0) {
            int last = temp % 10;
            temp = temp / 10;
            num = num*10 + last;
        }
        if (x - num == 0){
            return true;
        } else {
            return false;
        }
    }
};