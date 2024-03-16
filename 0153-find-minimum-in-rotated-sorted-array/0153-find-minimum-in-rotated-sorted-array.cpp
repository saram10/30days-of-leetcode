class Solution {
public:
    int findMin(vector<int>& nums) {
        int st=0;
        int en=nums.size()-1;
        while(st<en){
            int mi=st+(en-st)/2;
            if(nums[mi]>nums[en])
                st=mi+1;
            else
                en=mi;
        }
        return nums[st];
    }
};