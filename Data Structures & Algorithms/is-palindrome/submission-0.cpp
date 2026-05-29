class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.size() - 1;
        
        while( i < j) {
            if(!isalnum(s[i])) {
                i++;
            } else if (!isalnum(s[j])) {
                j--;
            } else {
                char left = tolower(s[i]);
                char right = tolower(s[j]);

                if(left != right) {
                    return false;
                }

                i++;
                j--;
            }
        }

        return i >= j;
    }
};
