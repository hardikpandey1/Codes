class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        vector<int>v(nums.size());
        for(int k=nums.size()-1;k>=0;k--){
            if(abs(nums[l])>abs(nums[r]))
                v[k]=nums[l]*nums[l++];
            else
                v[k]=nums[r]*nums[r--];}
        return v;
    }
};