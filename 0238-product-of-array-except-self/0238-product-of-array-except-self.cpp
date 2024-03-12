class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        vector<int>ans(n);
        vector<int>bef(n,1);
        vector<int>aft(n,1);
        for(int i=1;i<n;i++){
            bef[i]=bef[i-1] * nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            aft[i]=aft[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++){
        ans[i]=aft[i]*bef[i];
        }
        return ans;
    }
};