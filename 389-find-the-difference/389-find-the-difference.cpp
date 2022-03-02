class Solution {
public:
    char findTheDifference(string s, string t) {
        char ss=s[0];
        for(int i=1;i<s.length();i++)
            ss^=s[i];
        for(int i=0;i<t.length();i++)
            ss^=t[i];
        return ss;
    }
};