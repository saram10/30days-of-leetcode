class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int p=matrix[0].size();
        int q=matrix.size();
        bool FR=false;
        bool FC=false;
        
        for(int i=0;i<p;i++){
            if(matrix[0][i]==0) {
                FR=true;
                break;
            }
        }
        for(int i=0;i<q;i++){
            if(matrix[i][0]==0){
                FC=true;
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
        for(int i=1;i<p;i++){
            if(matrix[0][i]==0){
                for(int j=1;j<q;j++){
                    matrix[j][i]=0;
                }
            }
        }
        if(FR){
            for(int i=0;i<p;i++){
                matrix[0][i]=0;
            }
        }
        if(FC){
            for(int i=0;i<q;i++){
                matrix[i][0]=0;
            }
        }  
    }
};