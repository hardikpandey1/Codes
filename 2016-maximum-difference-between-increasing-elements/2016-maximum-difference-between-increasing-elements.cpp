class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int s=nums[0],r=-1;
        for(int i=1;i<nums.size();i++){
            r=max(r,nums[i]-s);
            s=min(s,nums[i]);
        }
        return r==0?-1:r;
    }
};