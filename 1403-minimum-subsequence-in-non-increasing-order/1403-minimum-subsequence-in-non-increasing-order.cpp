class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int>ans;
        int i,j,sumr=0,suml=0;
        sort(begin(nums),end(nums));
        for(i=0,j=0;j<nums.size();++j){
            sumr+=nums[j];
            if(sumr-nums[i]>suml+nums[i])
            {
                sumr-=nums[i];
                suml+=nums[i];
                ++i;
            }
        }
        for(--j;j>=i;--j)
            ans.push_back(nums[j]);
        return ans;
    }
};