class Solution {
public:
    int gc(int a, int b){
        if(a==0)
            return b;
        return gc(b%a,a);
    }
    
    int findGCD(vector<int>& nums) {
        int mi=INT_MAX,ma=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<mi)
                mi=nums[i];
            if(nums[i]>ma)
                ma=nums[i];
        }
        return gc(mi,ma);
    }
};