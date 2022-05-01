class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        map<int,int>mp;
        int m=INT_MAX,a=0;
        for(int i=0;i<cards.size();i++)
        {
            if(mp.find(cards[i])!=mp.end() and i-mp[cards[i]]<m){
                m=i-mp[cards[i]];
                a=1;
            }
            else
                mp[cards[i]]=i;
        }
        if(a==1)
            return m+1;
        return -1;
    }
};