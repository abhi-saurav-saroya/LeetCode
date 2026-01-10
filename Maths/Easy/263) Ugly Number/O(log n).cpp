// An ugly number is defined as a positive number whose prime factors are limited to 2, 3, and 5.
// So, if we continuously divide the given number by 2, 3, and 5 whenever possible, and finally end up with 1, then the number contains no other prime factors and is ugly.
// If anything greater than 1 remains, it means some other prime factor exists.

class Solution {
public:
    bool isUgly(int n) {
        if (n < 1)
            return false;
            
        while(n % 2 == 0)
            n /= 2;
        while(n % 3 == 0)
            n /= 3;
        while(n % 5 == 0)
            n /= 5;

        if(n == 1)
            return true;
        return false;
    }
};