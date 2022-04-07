class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>>v;
        for(int i=0,j=0;i<s.size();i=j){
            while(j<s.size() and s[j]==s[i])
                j+=1;
            if(j-i>=3)
                v.push_back({i,j-1});
        }
        return v;
    }
};