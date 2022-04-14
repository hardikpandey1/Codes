class Solution {
public:
    int balancedStringSplit(string s) {
        int cnt = 0;
        int cur = 0;
        for (auto i:s){
            if(cur == 0)
                cnt+=1;
            if(i=='R')
                cur+=1;
            else
                cur-=1;
        }
        return cnt;
    }
};