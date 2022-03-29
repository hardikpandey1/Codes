class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(2);
        for(auto i:nums)
            nums[(i-1)%10000]+=10000;
        for(int i=0;i<n;i++){
            if(nums[i]>20000)
                v[0]=i+1;
            if(nums[i]<10001)
                v[1]=i+1;
        }
        return v;
    }
};