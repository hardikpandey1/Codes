class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int c=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1])
                c+=1;
            else
                nums[i-c]=nums[i];
        }
        return nums.size()-c;
    }
};