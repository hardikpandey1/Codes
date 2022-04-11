class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<nums.size();i++)
            pq.push({nums[i],i});
        vector<int>index;
        while(k--)
        {
            pair<int,int>t=pq.top();
            index.push_back(t.second);
            pq.pop();
        }
        sort(begin(index),end(index));
        for(int i=0;i<index.size();i++)
            index[i]=nums[index[i]];
        return index;
    }
};