class Solution {
public:
    bool isPalindrome(string s) {
        int ii=0;
        while(ii<s.length()){
            s[ii]=tolower(s[ii]);
            if((s[ii]<='z' and s[ii]>='a') or (s[ii]>='0' and s[ii]<='9'))
                ii++;
            else
                s.erase(ii,1);
        }
        //cout<<s;
        int i=0,j=s.length()-1;
        while(i<j){
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};