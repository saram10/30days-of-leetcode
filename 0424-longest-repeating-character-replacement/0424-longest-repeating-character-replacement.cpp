class Solution {
public:
    int characterReplacement(string s, int k) {
        int start=0;
        int ans=0;
        int count=0;
        vector<int> ch_use(26,0);

        for(int end=0;end<s.length();end++){
            int chind=s[end]-'A';
            ch_use[chind]++;
            count=max(count,ch_use[chind]);

            if((end-start+1-count)>k){
                int lftind=s[start]-'A';
                ch_use[lftind]--;
                start++;
            }
            ans=max(ans,end-start+1);
        }
        return ans;
    }
};