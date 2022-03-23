class Solution {
public:
    int minMoves(int t, int m) {
        int i=1;
        int c=0;
        while(i<t){
            if(m==0)
            return t+c-1;
            if(t%2==0 and m){
                t/=2;
                m-=1;
                c+=1;
            }
            else{
                t-=1;
                c+=1;
            }
        }
        return c;
    }
};