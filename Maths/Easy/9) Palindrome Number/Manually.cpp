class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)   
            return false;

        int original = x;
        unsigned long long palindrome = 0;

        while(x > 0) {
            palindrome = (palindrome * 10) + (x % 10);
            x /= 10;
        }

        return original == palindrome;
    }
};