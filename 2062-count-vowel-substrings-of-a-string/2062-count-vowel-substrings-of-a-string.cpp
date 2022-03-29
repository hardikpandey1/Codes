class Solution {
public:
    bool isVowel(char c){
        return c=='a' or c=='e' or c=='i' or c=='o' or c=='u';
    }
    int atmost(string &s, int goal){
        int ans=0,i=0,j=0,n=s.size();
        unordered_map<char,int>mp;
        for(;j<n;++j){
            if(!isVowel(s[j])){
                i=j+1;
                mp.clear();
                continue;
            }
            mp[s[j]]+=1;
            for(;mp.size()>goal;i++)
                if(--mp[s[i]]==0)
                    mp.erase(s[i]);
            ans+=j-i+1;
        }
        return ans;
    }
    int countVowelSubstrings(string s) {
        return atmost(s,5)-atmost(s,4);
    }
};