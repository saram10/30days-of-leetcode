class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int si = nums.size();
        if (si==0)
            return 0;

        int to=0;
        for(int i=1;i<si;i++) {
            if (nums[i]!=nums[to]) {
                to++;
                nums[to]=nums[i];
          }}
        return to+1;
        }
};