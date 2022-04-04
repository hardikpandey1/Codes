class Solution {
public:
    bool checkRecord(string s) {
        int c=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='L' and s[i+1]=='L' and s[i+2]=='L')
                return false;
            if(s[i]=='A')
                c+=1;
        }
        if(c>1)
            return false;
        return true;
    }
};