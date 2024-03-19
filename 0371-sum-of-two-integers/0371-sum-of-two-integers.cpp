class Solution {
public:
    int getSum(int a, int b) {
        int cr;
        while(b!=0){
            cr=(a&b)<<1;
            a^=b;
            b=cr;
        }
        return a;
    }
};