class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        
        function<bool(int,int,int)> wrdsr=[&](int i,int j,int k){
            if(i<0||j<0||i>=m||j>=n||board[i][j]!=word[k])
                return false;            
            if(k==word.length()-1)
                return true;          
            char tem=board[i][j];
            board[i][j]='*';          
            bool fnd=wrdsr(i + 1, j, k + 1) ||wrdsr(i - 1, j, k + 1) ||wrdsr(i, j + 1, k + 1) ||wrdsr(i, j - 1, k + 1);
            
            board[i][j]=tem;      
            return fnd;
        };
        
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(wrdsr(i,j,0))
                    return true;
            }
        }
        return false;
    }
};