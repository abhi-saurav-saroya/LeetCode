// Lookup and Building all in one loop - O(n)
// "index[nums[i]] = i;" is placed after the lookup in this code snippet so as we dont have to check "i != map[find]" unlike in the previous slower hashmap approach

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> index;

        for (int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];

            auto it = index.find(need);
            if (it != index.end()) {
                return {it->second, i};
            }

            index[nums[i]] = i;
        }
        return {};
    }
};