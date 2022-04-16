class Solution {
public:
    vector<int> distributeCandies(int c, int n) {
        vector<int>v(n);
        int l=0,r=1;
        while(c>0){
            v[l%n]+=min(c,r);
            c-=r;
            l+=1;
            r+=1;
        }
        return v;
    }
};