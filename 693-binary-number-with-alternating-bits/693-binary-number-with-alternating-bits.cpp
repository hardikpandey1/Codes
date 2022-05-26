class Solution {
public:
    bool hasAlternatingBits(int n) {
        int x=n&1,y=0;
        while(n){
            y=x;
            n/=2;
            x=n&1;
            if(y==x)
                return false;
        }
        return true;
    }
};