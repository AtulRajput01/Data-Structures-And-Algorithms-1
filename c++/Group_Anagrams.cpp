class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        vector<vector<string>> res;
        for(auto str : strs) {
            string s = str;
            sort(s.begin(), s.end());
            map[s].push_back(str);
        }
        for(auto x : map) res.push_back(x.second);
        return res;
    }
};
