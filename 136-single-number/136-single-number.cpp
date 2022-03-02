class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int s=nums[0],n=nums.size();
        for(int i=1;i<n;i++)
            s^=nums[i];
        return s;
    }
};