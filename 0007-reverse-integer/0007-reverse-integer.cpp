class Solution {
public:
    int reverse(int x) {
        int rx=0;
        int s=(x<0)?-1:1;
        x=abs(x);
        while(x>0){
            int n=x%10;
            if(rx>INT_MAX/10||(rx==INT_MAX/10&&n>INT_MAX%10)){
                return 0;
            }
            rx=rx*10+n;
            x/=10;
          }
        return rx*s; 
    }
};