class Solution {
public:
    int strStr(string haystack, string needle) {
        int hays=haystack.size();
        int nedls=needle.size();
        if (nedls == 0) {
            return 0;
      }
        for(int i=0;i<hays-nedls+1;i++){
            if(haystack[i]==needle[0]){
                bool ans=true;
                for(int j=1;j<nedls;j++){
                    if(haystack[i+j]!=needle[j]){
                        ans=false;
                        break;
            }
          }
            if(ans)
                return i;
        }
        }
        return -1;
    }
};