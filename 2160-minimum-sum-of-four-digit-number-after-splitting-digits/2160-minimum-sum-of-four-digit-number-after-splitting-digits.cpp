class Solution {
public:
    int minimumSum(int num) {
        string s=to_string(num);
        sort(begin(s),end(s));
        string st="";
        st+=s[0];
        st+=s[2];
        string ss="";
        ss+=s[1];
        ss+=s[3];
        int a=stoi(st);
        int b=stoi(ss);
        return a+b;
    }
};