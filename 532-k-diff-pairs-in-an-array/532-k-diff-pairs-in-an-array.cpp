class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>ump;
        for(int i=0;i<n;i++)
            ump[nums[i]]+=1;
        int c=0;
        for(auto it:ump){
            if(k==0){
                if(it.second>=2)
                    c+=1;
            }
            else{
                if(ump.find(it.first-k)!=ump.end())
                    c+=1;
            }
        }
        return c;
    }
};