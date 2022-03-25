class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n=costs.size()/2;
        int r=0;
        vector<int>v;
        for(auto it:costs)
        {
            r+=it[0];
            v.push_back(it[1]-it[0]);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            r+=v[i];
        }
        return r;
    }
};