class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>v;
        int a=s.length();
        if(a%k)
           for(int i=0;i<k-(a%k);i++)
               s+=fill;
        for(int i=0;i<s.length();i+=k){
            string st="";
            for(int j=i;j<i+k;j++){
                st+=s[j];
            }
            v.push_back(st);
        }
        return v;
    }
};