// O(2n) fast but multiple loops

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;

        if(digits[i] != 9) {
            digits[i] += 1; 
            return digits;
        }

        for(int j = i - 1; j >= 0; j--) {
            digits[j+1] = 0;
            if(digits[j] != 9) {
                digits[j] += 1;
                break;
            }
            else {
                digits[j] = 0;
            }
        }

        if(digits[0] == 0 || digits[0] == 9 && digits.size() == 1) {
            digits[0] = 0;
            digits.push_back(0);
            for (int k = digits.size() - 1; k > 0; k--) {
                digits[k] = digits[k - 1];
            }
            digits[0] = 1;
        }
        return digits;
         
    }
};