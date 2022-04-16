class Solution {
public:
    int countHillValley(vector<int>& nums) {
        nums.erase(unique(begin(nums), end(nums)), end(nums));
        int c=0;
        for(int i=1;i<nums.size()-1;i++)
        {
            if((nums[i]>nums[i-1] and nums[i]>nums[i+1]) or (nums[i]<nums[i-1] and nums[i]<nums[i+1]))
                c+=1;
        }
        return c;
    }
};