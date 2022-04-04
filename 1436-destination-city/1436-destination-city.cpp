class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string>mp;
        for(auto a:paths)
            mp.insert(a[0]);
        for(auto a:paths)
            if(!mp.count(a[1]))
                return a[1];
        return "";
    }
};