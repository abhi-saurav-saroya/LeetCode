//  This again is logically correct - written using one for loop only but still exceeds the time limit
// O(n squared) without even using nested loops because I still somehow used the same logic by decrementing i pointer

class Solution {
public:
    int maxArea(vector<int>& height) {
        if(height.size() < 2) 
            return 0;
            
        int maxArea = 0;

        int j = height.size() - 1;
        for(int i = 0; i < height.size() - 1; i++) {
            int h = height[i] >= height[j] ? height [j] : height[i];
            int w = j - i;
            int area = h * w;
            if(area > maxArea)
                maxArea = area;
            if(j > i) {
                j--;
                i--;
            }
            else
                j = height.size() - 1;
        }
        return maxArea;
    }
};