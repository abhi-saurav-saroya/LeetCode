// O(n)

class Solution {
public:
    int pivotInteger(int n) {
        for(int x = 1; x <= n; x++) {
            float sum_left = (x / 2.0) * (1.0 + x);
            float sum_right = ((n - x + 1.0) / 2.0) * (x + n);
            if(sum_left == sum_right)
                return x;
        }
        return -1;
    }
};