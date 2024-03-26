class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>hp;
        for(auto x: strs)
        {
            string word = x;
            sort(word.begin(), word.end());
            hp[word].push_back(x);
        }
        vector<vector<string>>res;
        for(auto x: hp)
        {
            res.push_back(x.second);
        }
        return res;    
    }
};