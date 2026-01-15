class Solution {
public:
    string reverseVowels(string s) {
        int i = 0, j = s.length() - 1;

        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

        while(i < j) {
            if(!vowels.count(s[i]))
                i++;
            if(!vowels.count(s[j])) 
                j--;
            
            if(vowels.count(s[i]) && vowels.count(s[j]))
                swap(s[i++], s[j--]);
        }

        return s;
    }
};