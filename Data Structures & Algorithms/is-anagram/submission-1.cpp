class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> checks(26);

        for(char ch : s) checks[ch-'a']++;
        for(char ch : t) checks[ch-'a']--;

        for(int check : checks)
            if(check != 0)
                return false;

        return true;
    }
};
