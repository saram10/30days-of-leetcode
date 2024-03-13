class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0;
        int mini=INT_MAX;
        for(int price:prices){
            mini=min(mini,price);
            maxi=max(maxi,price-mini);
        }
        return maxi;
    }
};