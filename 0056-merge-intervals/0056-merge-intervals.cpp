class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
         if(intervals.empty()) 
             return {};

    sort(intervals.begin(),intervals.end(),[](const vector<int>&n1,const vector<int>&n2){
        return n1[0]<n2[0];
    });

    vector<vector<int>> ans;
    ans.push_back(intervals[0]);
    for(int i=1;i<intervals.size();i++){
        if(intervals[i][0]<=ans.back()[1]){
            ans.back()[1]=max(ans.back()[1],intervals[i][1]);
        }else{
            ans.push_back(intervals[i]);
        }
    }

    return ans;
    }
};