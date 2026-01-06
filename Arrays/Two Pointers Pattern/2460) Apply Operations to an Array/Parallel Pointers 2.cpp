// Swapping zeroes beforehand to avoid manual tasking in the end

class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=0; i <nums.size() - 1; i++) {
            int j = i + 1;
            if (nums[i] == nums[j]) {
                nums[i] *= 2;
                nums[j] = 0;
            }
        }

        int k = 0;
        for(int j = 0; j < nums.size(); j++) {
            if (nums[j] != 0) {
                int temp = nums[k];
                nums[k++] = nums[j];
                nums[j] = temp;
            }
        }
        return nums;
    }
};