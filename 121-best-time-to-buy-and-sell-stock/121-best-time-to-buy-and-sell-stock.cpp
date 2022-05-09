class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m=INT_MAX;
        int profit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<m)
                m=prices[i];
            else if(profit<prices[i]-m)
                profit=prices[i]-m;
        }
        return profit;
    }
};