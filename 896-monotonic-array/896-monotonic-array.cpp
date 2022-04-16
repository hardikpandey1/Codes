class Solution {
public:
    bool increasing(vector<int>nums){
        for(int i=0;i<nums.size()-1;i++)
            if(nums[i+1]<nums[i])
                return false;
        return true;
    }
    bool decreasing(vector<int>nums){
        for(int i=0;i<nums.size()-1;i++)
            if(nums[i+1]>nums[i])
                return false;
        return true;
    }
    bool isMonotonic(vector<int>& nums) {
        return increasing(nums) or decreasing(nums);
    }
};