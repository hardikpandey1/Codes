class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>an;
        int x;
        for(int i=0;i<nums.size();i++){
            x=abs(nums[i])-1;
            nums[x]=(nums[x]>0?-nums[x]:nums[x]);
        }
        for(int i=0;i<nums.size();i++)
            if(nums[i]>0)
            an.push_back(i+1);
        return an;
        
    }
};