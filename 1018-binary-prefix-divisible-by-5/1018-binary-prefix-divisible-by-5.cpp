class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool>b(nums.size());
        int a=0;
        for(int i=0;i<nums.size();i++){
            a=a*2+nums[i];
            if(a%5)
                b[i]=false;
            else
                b[i]=true;
            a%=5;
        }
        return b;
    }
};