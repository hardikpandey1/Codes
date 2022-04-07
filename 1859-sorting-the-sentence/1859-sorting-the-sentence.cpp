class Solution {
public:
    string sortSentence(string s) {
        map<int,string>mp;
        string cur="";
        for(char c:s){
            if(c==' ' and cur!=""){
                string ncur=cur;
                char id=ncur.back();
                int idx=(id-'0');
                ncur.pop_back();
                mp[idx]=ncur;
                cur="";
            }
            else
                cur+=c;
        }
        if(cur!="")
        {
            string ncur=cur;
            char id=ncur.back();
            int idx=id-'0';
            ncur.pop_back();
            mp[idx]=ncur;
            cur="";
        }
        for(auto c:mp){
            cur+=c.second;
            cur+=' ';
        }
        if(cur.back()==' ')
            cur.pop_back();
        return cur;
    }
};