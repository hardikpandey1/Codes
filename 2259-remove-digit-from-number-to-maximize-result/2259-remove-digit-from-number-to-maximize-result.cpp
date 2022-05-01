class Solution {
public:
    string removeDigit(string number, char digit) {
        vector<string>v;
        string a="";
        for(int i=0;i<number.length();i++){
            if(number[i]==digit){
                a=number;
                a.erase(i,1);
            }
        v.push_back(a);
    }
        sort(begin(v),end(v));
        return v[v.size()-1];
    }
};