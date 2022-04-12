class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>odd;
        for(int i=1;i<nums.size();i+=2)
            odd.push_back(nums[i]);
        vector<int>even;
        for(int i=0;i<nums.size();i+=2)
            even.push_back(nums[i]);
        sort(begin(even),end(even));
        sort(rbegin(odd),rend(odd));
        int j=0,k=0;
        for(int i=0;i<nums.size();i+=1)
        {
            if(i&1){
                nums[i]=odd[j];
                j+=1;
            }
            else
            {
                nums[i]=even[k];
                k+=1;
            }
        }
        return nums;
    }
};