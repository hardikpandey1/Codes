class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(begin(nums),end(nums));
        int a=max(nums[0]*nums[1]*nums[nums.size()-1],(nums[nums.size()-1])*(nums[nums.size()-2])*(nums[nums.size()-3]));
        return a;
    }
};