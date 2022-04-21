class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int x=tickets[k];
        int sum=0;
        for(int i=0;i<=k;i++){
            if(tickets[i]<=x)
                sum+=tickets[i];
            else
                sum+=x;
        }
        for(int i=k+1;i<tickets.size();i++)
        {
            if(tickets[i]<=(x-1))
                sum+=tickets[i];
            else
                sum+=(x-1);
        }
        return sum;
    }
};