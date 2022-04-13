class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int c=0;
        map<char,int>mp;
        for(int i=0;i<allowed.size();i+=1)
            mp[allowed[i]]+=1;
        for(int i=0;i<words.size();i+=1){
            int a=0;
            for(int j=0;j<words[i].size();j+=1)
            {
                if(mp[words[i][j]]==0)
                {
                    a=1;
                    break;
                }
            }
            if(a==0)
                c+=1;
        }
        return c;
    }
};