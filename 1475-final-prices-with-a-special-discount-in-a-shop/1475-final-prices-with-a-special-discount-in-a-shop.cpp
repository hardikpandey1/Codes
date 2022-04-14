class Solution {
public:
    vector<int> finalPrices(vector<int>& nums) {
        vector<int>v;
        for(int i=0;i<nums.size()-1;i+=1)
        {
            int c=0;
            for(int j=i+1;j<nums.size();j+=1){
                if(nums[j]<=nums[i])
                {
                    v.push_back(nums[i]-nums[j]);
                    c=1;
                    break;
                }
            }
            if(c==0)
                    v.push_back(nums[i]);
        }
        v.push_back(nums[nums.size()-1]);
        return v;
    }
};