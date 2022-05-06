class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s="";
        for(int i=0;i<word1.size();i++)
            s+=word1[i];
        string st="";
        for(int i=0;i<word2.size();i++)
            st+=word2[i];
        return s==st;
    }
};