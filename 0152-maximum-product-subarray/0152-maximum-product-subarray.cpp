class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi=1;
        int mini=1;
        int ans=nums[0];
        int n=nums.size();
        for(int i=0;i<n;i++){
            maxi=maxi==0?1:maxi;
            mini=mini==0?1:mini;
            maxi=maxi*nums[i];
            mini=mini*nums[n-1-i];
            ans=max(ans,max(maxi,mini));
        }
        return ans;
    }
};