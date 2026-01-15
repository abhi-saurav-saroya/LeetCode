class Solution {
public:
    
    bool isVowel(char ch) {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return 1;
        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') return 1;
        return 0;
    }
    
    string reverseVowels(string s) {
        int n = s.size();
        int i = 0, j = n - 1;
        
        while(i < j && i < n) {
            while(i < n && i < j && !isVowel(s[i])) {
                i++;
            }
            
            while(i < j && !isVowel(s[j])) {
                j--;
            }
            
            if(i < j) {
                swap(s[i], s[j]);
                i++, j--;
            }
        }
        
        return s;
    }
};