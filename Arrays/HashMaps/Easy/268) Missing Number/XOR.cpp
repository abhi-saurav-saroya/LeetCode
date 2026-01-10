// NOTES: a^a = 0 and a^0 = a

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int xorr = 0;

        for (int i = 0; i <= n; i++) {
            xorr ^= i;
        }

        for (int num : nums) {
            xorr ^= num;
        }

        return xorr;
    }
};