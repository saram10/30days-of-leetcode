class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int n=nums.size()-1;
        int start=0;
        int end=n;
        int first=-1;
        int last=-1;
        while(start<=end){
            int centre=start+(end-start)/2;
            if(nums[centre]==target){
                first=centre;
                end=centre-1;
            }
            else if(nums[centre]<target){
                start=centre+1;
            }
            else{
                end=centre-1;
            }
        }
        start=0;
        end=n;
        while(start<=end){
            int centre=start+(end-start)/2;
            if(nums[centre]==target){
                last=centre;
                start=centre+1;
            }
            else if(nums[centre]<target){
                start=centre+1;
            }
            else{
                end=centre- 1;
            }
        }
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};