class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int r=0;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]+=1;
        for(int i=0;i<nums.size();i++)
        {
            if(k-nums[i]==nums[i])
            {
                if(mp[nums[i]]>1){
                    r+=1;
                    mp[nums[i]]-=2;
                }
            }
            else if(mp[nums[i]]>0 and mp[k-nums[i]]>0){
                r+=1;
                mp[k-nums[i]]-=1;
                mp[nums[i]]-=1;
            }
        }
        return r;
    }
};