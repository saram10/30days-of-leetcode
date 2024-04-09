class Solution {
public:
    int myAtoi(string s) {
        long ans=0;
        int p=1;
        int i=0;
        while(i<s.length()&& s[i]==' ')
            i++;
        if(i<s.length()&&(s[i]=='+'||s[i]=='-')){
            p=(s[i]=='-')?-1:1;
            i++;
        }
        while(i<s.length()&&isdigit(s[i])){
            ans=ans*10+(s[i]-'0');
            if(ans*p>INT_MAX)
                return INT_MAX;
            if(ans*p< INT_MIN)
                return INT_MIN;
            i++;
        }
        return ans*p;
    }
};