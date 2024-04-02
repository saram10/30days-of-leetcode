class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size();
        int ans=0;
        for(int mid=0;mid<2*n-1;mid++){
            int left=mid/2;
            int right=left+mid%2;
            while (right<n && left>=0 && s[left]==s[right]){
                ans++;
                right++;
                left--;
            }
        }
        return ans;
    }
};