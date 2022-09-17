class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mae=nums[0];
        int mie=nums[0];
        int msf=nums[0];
        for(int i=1;i<nums.size();i++){
            int temp=max({nums[i],mie*nums[i],mae*nums[i]});
            mie=min({nums[i],mie*nums[i],mae*nums[i]});
            mae=temp;
            msf=max(msf,mae);
        }
        return msf;
    }
};