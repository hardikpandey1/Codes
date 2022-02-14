class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mi=INT_MAX;
        int profit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<mi)
                mi=prices[i];
            else if(prices[i]-mi>profit)
                profit=prices[i]-mi;
        }
        return profit;
    }
};