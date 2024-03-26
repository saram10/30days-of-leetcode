class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int p=matrix[0].size();
        int q=matrix.size();
        bool FirstRowHasZero=false;
        bool FirstColumnHasZero=false;
        
        for(int i=0;i<p;i++){
            if(matrix[0][i]==0) {
                FirstRowHasZero=true;
                break;
            }
        }
        for(int i=0;i<q;i++){
            if(matrix[i][0]==0){
                FirstColumnHasZero=true;
                break;
            }
        }
        for(int i=1;i<q;i++){
            for(int j=1;j<p;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=1;i<q;i++){
            if(matrix[i][0]==0){
                for(int j=1;j<p;j++){
                    matrix[i][j]=0;
                }
            }
        }
        for(int j=1;j<p;j++){
            if(matrix[0][j]==0){
                for(int i=1;i<q;i++){
                    matrix[i][j]=0;
                }
            }
        }
        if(FirstRowHasZero){
            for(int i=0;i<p;i++){
                matrix[0][i]=0;
            }
        }
        if(FirstColumnHasZero){
            for(int i=0;i<q;i++){
                matrix[i][0]=0;
            }
        }  
    }
};