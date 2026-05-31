class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashmap;

        for (string& s : strs) {
            vector<int> freqs(26, 0);
            for (char& ch : s) {
                freqs[ch - 'a']++;
            }

            string key = to_string(freqs[0]);

            for (int i = 1; i < 26; i++) {
                key += "," + to_string(freqs[i]);
            }

            hashmap[key].push_back(s);
        }

        vector<vector<string>> groups;

        for (auto& group : hashmap) {
            groups.push_back(group.second);
        }

        return groups;
    }
};
