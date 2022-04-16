class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums)
            mp[i]+=1;
        sort(begin(nums),end(nums),[&](int a, int b){
            return mp[a]!=mp[b]?mp[a]<mp[b]:a>b;
        });
        return nums;
    }
};