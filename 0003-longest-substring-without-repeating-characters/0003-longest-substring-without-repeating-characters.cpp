class Solution {
public:
    int lengthOfLongestSubstring(string s) { 
        int k=s.size();
        int maxl=0;
        int left=0,right=0;
        unordered_map<char,int> charIndexMap;
        while(right<k){  
            char currentChar=s[right];
            if(charIndexMap.count(currentChar)){
                left=max(left,charIndexMap[currentChar]+1);
            }
            charIndexMap[currentChar]=right;
            maxl=max(maxl,right-left+1);
            right++;
          }
        return maxl;
    }
};