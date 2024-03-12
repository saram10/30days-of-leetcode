class Solution {
public:
    bool isPalindrome(int x) {
        int st=x;
        long long int rev=0;
        while(x>0){
            int ls=x%10;
            rev=rev*10+ls;
            x=x/10;
        }
        return rev==st;
    }
};