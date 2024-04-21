class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int infpt = -1;
        
        // Find the inflection point
        for(int i = nums.size() - 1; i > 0; i--) {
            if(nums[i] > nums[i - 1]) {
                infpt = i - 1;
                break;
            }
        }

        // If no inflection point found, reverse the whole array
        if(infpt == -1) {
            reverse(nums.begin(), nums.end());
        } else {
            // Find the smallest number greater than nums[infpt]
            int minIndex = infpt + 1;
            for(int j = infpt + 1; j < nums.size(); j++) {
                if(nums[j] > nums[infpt] && nums[j] <= nums[minIndex]) {
                    minIndex = j;
                }
            }

            // Swap nums[infpt] and nums[minIndex]
            swap(nums[infpt], nums[minIndex]);

            // Reverse the sub-array nums[infpt+1, end]
            reverse(nums.begin() + infpt + 1, nums.end());
        }
    }
};
