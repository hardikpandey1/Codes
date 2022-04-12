class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0,j=nums.size()-1;
        while(i<j){
            if(nums[i]%2!=0 and nums[j]%2==0){
                swap(nums[i],nums[j]);
                i+=1;
                j-=1;
            }
            else if(nums[i]%2!=0 and nums[j]%2!=0)
                j-=1;
            else if(nums[i]%2==0 and nums[j]%2!=0)
                i+=1;
            else{
                i+=1;
            }
        }
        return nums;
    }
};