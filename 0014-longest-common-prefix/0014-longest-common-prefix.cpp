class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) 
            return "";     
        int mini=INT_MAX;
        for(const string&str:strs){
            mini=min(mini,static_cast<int>(str.length()));
        }
        for(int i=0;i<mini;i++){
            char crch=strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(strs[j][i]!=crch){
                    return strs[0].substr(0,i);
                }
            }
        } 
        return strs[0].substr(0,mini);
    }
};