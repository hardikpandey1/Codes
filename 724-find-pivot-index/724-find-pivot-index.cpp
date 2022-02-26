class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int s=0,l=0;
        for(int i:nums)
            s+=i;
        for(int i=0;i<nums.size();i++){
            if(l==s-l-nums[i])
                return i;
            l+=nums[i];
        }
        return -1;
    }
};