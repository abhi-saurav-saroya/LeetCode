// O(n) - totally optimized
// Logic - The only chance to get a bigger area is to move the shorter wall.

class Solution {
public:
    int maxArea(vector<int>& height) {
        if(height.size() < 2) 
            return 0;
            
        int maxArea = 0;

        int left = 0;
        int right = height.size() - 1;

        while(left < right) {
            int h = height[left] >= height[right] ? height [right] : height[left];
            int w = right - left;
            int area = h * w;
            if(area > maxArea)
                maxArea = area;

            if(height[left] < height[right])
                left++;
            else
                right--;
        }
        return maxArea;
    }
};