class Solution {
public:
    string truncateSentence(string s, int k) {
        int c=0;
        int i=0,j=s.length();
        while(i<j){
            if(s[i]==' ' and s[i+1]!=' ')
                c+=1;
            i+=1;
        }
        if(c<k)
            return s;
        c=0,i=0,j=s.length();
        while(1){
            if(c==k)
            {
                s.erase(i-1,j-i+1);
                break;
            }
            if(s[i]==' ' and s[i+1]!=' ')
                c+=1;
            i+=1;
        }
        return s;
    }
};