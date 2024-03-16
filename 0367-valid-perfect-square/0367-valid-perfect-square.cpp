class Solution {
public:
    bool isPerfectSquare(int num) {
        long long num1=num;
        bool a=false;
        for(long long int i=1;i*i<=num1;i++){
            if(i*i==num1){
                a= true;
                break;
            }
        }
        return a;
    }
};