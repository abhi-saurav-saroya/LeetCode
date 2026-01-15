class Solution {
public:
    string reverseVowels(string s) {
        int i = 0, j = s.length() - 1;

        string vowels = "aeiouAEIOU";

        while(i <= j) {
            if(find(vowels.begin(), vowels.end(), s[i]) != vowels.end()) {
                if (find(vowels.begin(), vowels.end(), s[j]) != vowels.end()) {
                    swap(s[i++], s[j--]);
                } else {
                    j--;
                }
            } else {
                i++;
            }
        }

        return s;
    }
};