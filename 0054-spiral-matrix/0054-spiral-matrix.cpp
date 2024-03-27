class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int ro=matrix.size();
        int cl=matrix[0].size();
        int t=0,btm=ro-1,l=0,r=cl-1;
        vector<int>ans;

        while(t<=btm&&l<=r){
            for(int cl=l;cl<=r;cl++){
                ans.push_back(matrix[t][cl]);
      }
        t++;
        for(int ro=t;ro<=btm;ro++){
            ans.push_back(matrix[ro][r]);
      }
            r--;
        if(t<=btm){
            for(int cl=r;cl>=l;cl--){
                ans.push_back(matrix[btm][cl]);
        }
      }
            btm--;
        if (l<=r) {
            for(int ro=btm;ro>=t;ro--){
                ans.push_back(matrix[ro][l]);
        }
      }
            l++;
    }
        return ans;
    }
};