class Solution {
public:
    int findMin(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        while(i<j){
            int m=i+(j-i)/2;
            if(nums[m]<nums[j])
                j=m;
            else
                i=m+1;
        }
        return nums[i];
    }
};