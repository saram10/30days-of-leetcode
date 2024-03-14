class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int m1=m-1;
        int n1=n-1;
        int mn=m+n-1;
        while(m1>=0 && n1>=0){
            if(nums1[m1]>nums2[n1]){
                nums1[mn--]=nums1[m1--];
            }
            else{
                nums1[mn--]=nums2[n1--];
            }
        }
        while(n1>=0){
            nums1[mn--]=nums2[n1--];
        }
    }
};