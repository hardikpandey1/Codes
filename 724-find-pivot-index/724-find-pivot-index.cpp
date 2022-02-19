class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int s=0,l=0;
        for(int x:nums)
            s+=x;
        for(int i=0;i<nums.size();i++){
            if(l==s-l-nums[i])
                return i;
            l+=nums[i];
        }
        return -1;
    }
};