class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty())
            return {};        
        vector<string> Map = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string n;
        vector<string> ans;
        order(digits,Map,ans,n,0);
        return ans;
    }    
    void order(const string& digits, const vector<string>& Map, vector<string>& ans, string& n, int index) {
        if(index==digits.length()){
            ans.push_back(n);
            return;
        }
        string letters=Map[digits[index]-'0'];
        for(char letter:letters){
            n.push_back(letter);
            order(digits,Map,ans,n,index+1);
            n.pop_back();
        }
    }
};