class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result;

        int j = 0;
        for(int i = n; i < nums.size(); i++) {
            result.push_back(nums[j++]);
            result.push_back(nums[i]);
        }

        return result;
    }
};