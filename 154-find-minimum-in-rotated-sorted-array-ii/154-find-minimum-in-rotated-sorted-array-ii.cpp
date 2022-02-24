class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,h=nums.size()-1,m=0;
        while(l<h){
            m=l+(h-l)/2;
            if(nums[m]>nums[h])
                l=m+1;
            else if(nums[m]<nums[h])
                h=m;
            else
                h-=1;
        }
        return nums[l];
    }
};