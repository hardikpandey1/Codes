class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int ans=INT_MIN;
        for(int i=0;i<nums.size();i++)
            ans=max(ans,nums[i]);
        int c=0,ind=0;
        for(int i=0;i<nums.size();i++){
            if(ans>=2*nums[i]){
                c+=1;
            }
            else ind=i;
        }
        if(c==nums.size()-1)
            return ind;
        return -1;
    }
};