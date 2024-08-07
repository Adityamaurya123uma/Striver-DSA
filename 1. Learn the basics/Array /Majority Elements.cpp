// this approach uses the Moore's Voting alogorithm

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int el;

        for(int i=0; i<nums.size(); i++) {
            if(cnt == 0){
                cnt = 1;
                el = nums[i];
            } else if(nums[i] == el) {
                cnt++;
            } else {
                cnt--;
            }
        }
        int cnt1 = 0;

        // This step is required only if it is mentioned that it can or cannot have a mojority element
      
        for(int i=0;i<nums.size();i++){
            if(nums[i] == el){
                cnt1++;
            }
        }

        if(cnt1 > (nums.size() / 2)){
            return el;
        }
        return -1;
    }
};