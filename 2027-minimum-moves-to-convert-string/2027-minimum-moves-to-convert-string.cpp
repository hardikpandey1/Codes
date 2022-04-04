class Solution {
public:
    int minimumMoves(string s) {
        int c=0;
        for(int i=0;i<s.length();){
            if(s[i]=='X'){
                c+=1;
                i+=3;
            }
            else
                i+=1;
        }
        return c;
    }
};