class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mp;
        unordered_set<char>mapped;
        if(s.length()!=t.length())
            return false;
        for(int i=0;i<s.size();i++){
            int cs=s[i],ct=t[i];
            if(mp.count(cs)){
                if(mp[cs]!=ct)
                    return false;
            }
            else{
                if(mapped.count(ct))
                    return false;
                mp[cs]=ct;
                mapped.insert(ct);
            }
        }
        return true;
    }
};