class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>tri(numRows);
        tri[0]={1};
        for(int i=1;i<numRows;i++){
            tri[i].resize(i+1,1);
            for(int j=1;j<i;j++){
                tri[i][j]=tri[i-1][j-1]+tri[i-1][j];
            }
        }
        return tri;
    }
};