// O(1) space complexity
// Linear traversal and Looking for mixing number by matching it with index

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int i;
        for(i = 0; i < nums.size(); i++) {
            if(nums[i] != i)
                break;
        }
        return i;
    }
};