class Solution {
public:
    bool areNumbersAscending(string s) {
        int p=0,c=0;
        for(auto ch:s){
            if(isdigit(ch))
                c=c*10+(ch-'0');
            else if(c!=0){
                if(p>=c)
                    return false;
                p=c;
                c=0;
            }
        }
        return c==0 or p<c;
    }
};