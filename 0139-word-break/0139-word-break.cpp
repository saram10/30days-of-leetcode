class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>di(wordDict.begin(),wordDict.end());
        int d=s.length();
        vector<bool>dp(d+1,false);
        dp[0]=true;
        for(int i=1;i<=d;i++){
            for(int j=0;j<i;j++){
                if(dp[j] && di.count(s.substr(j,i-j))){
                    dp[i]=true;
                    break;
                }
            }
        }
        return dp[d];
    }
};