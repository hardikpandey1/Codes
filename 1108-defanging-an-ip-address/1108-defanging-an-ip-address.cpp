class Solution {
public:
    string defangIPaddr(string s) {
        for(int i=0;i<s.length();i++){
            if(s[i]=='.'){
                s.insert(i,"[");
                s.insert(i+2,"]");
                i+=2;
            }}
    
        return s;
    }
};