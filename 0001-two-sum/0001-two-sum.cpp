class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>ans;
        for(int i=0;i<nums.size();i++){
            int re=target-nums[i];
            if(ans.count(re))
                return {ans[re],i};
            ans[nums[i]]=i;
        }
        return {};
    }
};