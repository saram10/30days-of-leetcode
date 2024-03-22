class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end(),[](const vector<int>&s,const vector<int>&t) {
            return s[1] < t[1];
        });

        int e=intervals[0][1];
        int r=0;

        for(int i=1;i<intervals.size();i++) {
            if(intervals[i][0]<e){
                r++;
            }else{
                e=intervals[i][1];
            }
        }

        return r;
    }
};