class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=01;i<nums.size();i++){
            nums[i]+=nums[i-1];
        }
        return nums;
    }
};