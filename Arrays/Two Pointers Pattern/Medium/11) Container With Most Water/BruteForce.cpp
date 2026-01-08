// Totally correct solution with O(n squared) complexity
// But exceeds time limit for large inputs


class Solution {
public:
    int maxArea(vector<int>& height) {
        if(height.size() < 2) 
            return 0;
            
        int maxArea = 0;
        for(int i = 0; i < height.size() - 1; i++) {
            for(int j = height.size() - 1; j > i; j--) {
                int h = height[i] >= height[j] ? height [j] : height[i];
                int w = j - i;
                int area = h * w;
                if(area > maxArea)
                    maxArea = area;
            }
        }
        return maxArea;
    }
};