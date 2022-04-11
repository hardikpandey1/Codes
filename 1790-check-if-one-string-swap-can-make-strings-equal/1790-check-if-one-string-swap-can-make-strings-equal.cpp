class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int c=0;
        int n=s1.length(),m=s2.length();
        if(n!=m)
            return false;
        vector<int>v(26);
        for(int i=0;i<n;i++){
            if(c>2)
                return false;
            if(s1[i]!=s2[i])
                c+=1;
            v[s1[i]-'a']+=1;
            v[s2[i]-'a']-=1;
        }
        if(c>2)
                return false;
        for(int i=0;i<v.size();i++)
            if(v[i]!=0)
                return false;
        return true;
    }
};