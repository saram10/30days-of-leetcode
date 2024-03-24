class Solution {
public:
    bool isValid(string s) {
        stack<char>ans;
        unordered_map<char,char>end={
            {')','('},
            {'}','{'},
            {']','['}
        };
        for(char c:s){
            if (end.find(c)!=end.end()){
                if (ans.empty()||ans.top()!=end[c])
                    return false;
                ans.pop();
            } else
                ans.push(c);
        }
        return ans.empty();
    }
};