class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0,c=0;
        while(i<s.length() and j<t.length()){
            if(s[i]==t[j]){
                c+=1;
                i+=1;
                j+=1;
            }
            else
                j+=1;
        }
        if(c==s.length())
            return true;
        return false;
    }
};