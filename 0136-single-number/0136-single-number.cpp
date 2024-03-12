
class Solution {
public:
    int singleNumber(const vector <int>&nums) {
        int s=0;
        for(const int&num:nums){
            s^=num;
        }
        cout<<s;
        return s;
    }
};
