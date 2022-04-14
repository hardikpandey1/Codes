class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        map<char,int>mp;
        for(int i=0;i<releaseTimes.size();i++){
            if(i>0)
                mp[keysPressed[i]]=max(releaseTimes[i]-releaseTimes[i-1],mp[keysPressed[i]]);
            else
                mp[keysPressed[i]]=releaseTimes[i];
        }
        char a=' ';
        int m=0;
        for(auto i:mp){
            if(i.second>m)
            {
                m=i.second;
                a=i.first;
            }
            if(i.second==m and i.first>a){
                a=i.first;
            }
        }
        return a;
    }
};