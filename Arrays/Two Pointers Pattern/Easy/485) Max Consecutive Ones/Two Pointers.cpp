class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i = 0, j = 0;
        int maxCount = 0, currentCount = 0;

        while(j < nums.size()) {
            if(nums[j] == 1) {
                j++;
                currentCount++;
                continue;
            }
            
            maxCount = max(maxCount, currentCount);
            currentCount = 0;
            i = j;
            j++;
        }

        maxCount = max(maxCount, currentCount);
        return maxCount;
    }
};