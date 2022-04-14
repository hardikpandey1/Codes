class Solution {
public:
    int arraySign(vector<int>& nums) {
        int p=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)
                nums[i]=1;
            if(nums[i]<0)
                nums[i]=-1;
            p*=nums[i];
        }
        if(p>0)
            return 1;
        if(p<0)
            return -1;
        return 0;
    }
};