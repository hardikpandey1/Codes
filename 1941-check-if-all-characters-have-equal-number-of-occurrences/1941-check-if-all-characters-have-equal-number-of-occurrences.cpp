class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>mp;
        for(int i=0;i<s.length();i++)
            mp[s[i]]+=1;
        for(int i=0;i<s.length()-1;i++)
            if(mp[s[i]]!=mp[s[i+1]])
                return false;
        return true;
    }
};