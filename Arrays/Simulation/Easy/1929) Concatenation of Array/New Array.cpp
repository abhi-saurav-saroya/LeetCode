class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result;

        for (int x : nums) {
            result.push_back(x);
        }
        for (int x : nums) {
            result.push_back(x);
        }

        return result;
    }
};