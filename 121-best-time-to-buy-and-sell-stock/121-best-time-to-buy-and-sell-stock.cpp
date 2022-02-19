class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int s=prices[0],r=0;
        for(int i=1;i<prices.size();i++){
            r=max(r,prices[i]-s);
            s=min(s,prices[i]);
        }
        return r;
    }
};