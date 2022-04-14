class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>v;
        stack<int>s;
        int i=prices.size()-1;
        while(i>=0){
            while(!s.empty() and prices[i]<s.top())
                s.pop();
            if(s.empty()){
                v.push_back(prices[i]);
                s.push(prices[i]);
            }
            else{
                v.push_back(prices[i]-s.top());
                s.push(prices[i]);
            }
            i-=1;
        }
        reverse(begin(v),end(v));
        return v;
    }
};