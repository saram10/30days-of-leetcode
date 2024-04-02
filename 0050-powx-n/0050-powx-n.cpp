class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
        int n1=abs(n);
        while(n1>0){
            if(n1%2!=0){
                ans*=x;
            }
            x*=x;
            n1=n1/2;       
        }
        if(n<0)
            return 1/ans;

        return ans;
    }
};