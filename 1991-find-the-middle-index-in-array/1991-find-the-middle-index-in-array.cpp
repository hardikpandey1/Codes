class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int l=0,s=0;
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