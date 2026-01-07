// O(n sqaured)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int left = 0; left < nums.size(); left++) {
            int right = nums.size() - 1;
            while(left < right) {
                if(nums[left] + nums[right] == target) {
                    return {left, right};
                }
                right--;
            }
        }

        return{};
    }
};