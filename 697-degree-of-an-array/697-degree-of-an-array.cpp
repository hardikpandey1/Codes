class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,int>first,last,count;
        for(int i=0;i<nums.size();i++)
        {
            if(first.find(nums[i])==first.end())
                first[nums[i]]=i;
            last[nums[i]]=i;
            count[nums[i]]+=1;
        }
        int maxi=0;
        for(auto i:count)
            maxi=max(maxi,i.second);
        int ans=nums.size();
        for(auto i:count)
        {
            if(i.second==maxi)
                ans=min(ans,last[i.first]-first[i.first]+1);
        }
        return ans;
    }
};