class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(begin(nums),end(nums));
        int diff=INT_MAX;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int first=nums[i];
            int start=i+1;
            int end=nums.size()-1;
            while(start<end){
                if(first+nums[start]+nums[end] == target)
                    return target;
                else if(abs(first+nums[start]+nums[end]-target)<diff){
                    diff=abs(first+nums[start]+nums[end]-target);
                    ans=first+nums[start]+nums[end];
                }
                else if(first+nums[start]+nums[end] > target)
                    end-=1;
                else if(first+nums[start]+nums[end] < target)
                    start+=1;
            }
        }
        return ans;
    }
};