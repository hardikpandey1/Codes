class Solution {
public:
    int minOperations(vector<int>& nums) {
        int s=0;
        priority_queue<int>pq;
        for(int i=0;i<nums.size();i++){
            if(!pq.empty() and pq.top()>=nums[i])
            {
                int val=nums[i];
                nums[i]=pq.top()+1;
                s+=nums[i]-val;
            }
            pq.push(nums[i]);
        }
        return s;
    }
};