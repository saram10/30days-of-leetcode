class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN&&divisor==-1)
            return INT_MAX;
        long long quo=0;
        long long posDsor=labs(divisor);
        long long posDdend=labs(dividend);
        int po=(dividend<0)^(divisor<0)?-1:1;
        while(posDdend>=posDsor){
            long long tem=posDsor;
            long long mul=1;
            while(posDdend>=(tem << 1)){
                tem<<=1;
                mul<<=1;
        }
            quo+=mul;
            posDdend-=tem;
        }
        return po*quo;
    }
};