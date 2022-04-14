class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string a="";
        int i=0,j=0;
        while(i<word1.size() or j<word2.size()){
            if(i<word1.size()){
            a+=word1[i];
                i+=1;
            }
            if(j<word2.size()){
            a+=word2[j];
                j+=1;
            }
        }
        return a;
    }
};