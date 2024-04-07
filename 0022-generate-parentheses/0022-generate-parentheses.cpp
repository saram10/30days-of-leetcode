class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> com;
        generateParenthesis(n,"",0,0,com);
        return com;
    }
    void generateParenthesis(int n,string cu,int st,int en,vector<string>& comb){
        if(cu.length()==2*n){
            comb.push_back(cu);
            return;
        }
        if(st<n)
            generateParenthesis(n,cu+"(",st+1,en,comb);
        if(en<st)
            generateParenthesis(n,cu+")",st,en+1,comb);
    }
};