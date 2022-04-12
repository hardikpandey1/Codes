class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string st=s;
        for(int i=0;i<s.length();i++)
            s[indices[i]]=st[i];
        return s;
    }
};