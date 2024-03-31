class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagram;
        for(string& str:strs){
            string sortstr=str;
            sort(sortstr.begin(),sortstr.end());
            anagram[sortstr].push_back(str);
        }
        vector<vector<string>>ans;
        for(auto& key:anagram){
            ans.push_back(key.second);
        }
        return ans;
    }
};