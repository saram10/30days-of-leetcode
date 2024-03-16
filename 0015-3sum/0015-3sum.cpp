class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());
        
        int n=nums.size();
        for(int i=0;i<n-2;i++) {
            if(i>0 && nums[i]==nums[i-1])
                continue;
            
            int st=i+1;
            int en=n-1; 
            while(st<en){
                int sum=nums[i]+nums[st]+nums[en];              
                if(sum==0){
                    ans.push_back({nums[i],nums[st],nums[en]});
                    while(st<en && nums[st]==nums[st+1]){
                        st++;
                    }
                    while(st<en && nums[en]==nums[en-1]){
                        en--;
                    }                    
                    st++;
                    en--;
               }else if(sum<0)
                    st++; 
                else 
                    en--;              
        }
        }
        return ans;
    }
};