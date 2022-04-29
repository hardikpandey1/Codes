class Solution {
public:
    string toHex(int num) {
        if(num==0)
            return "0";
        string s="";
        unsigned n=num;
        vector<char>v={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
        while(n)
        {
            s=v[n%16]+s;
            n/=16;
        }
        return s;
    }
};