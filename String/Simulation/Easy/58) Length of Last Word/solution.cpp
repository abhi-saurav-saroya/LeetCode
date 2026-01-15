class Solution {
public:
    int lengthOfLastWord(string s) {
        int lengthh = 0;

        for(int i = s.length() - 1; i >= 0; i--) {
            if(lengthh == 0 and s[i] == ' ')
                continue;
            else if(s[i] != ' ')
                lengthh++;
            else 
                break;
        }

        return lengthh;
    }
};