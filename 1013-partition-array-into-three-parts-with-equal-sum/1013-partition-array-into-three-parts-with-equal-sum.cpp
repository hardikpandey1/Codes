class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int parts=0,sum=0;
        auto total=accumulate(begin(arr),end(arr),0);
        if(total%3!=0)
            return false;
        for(int i=0,sum=0;i<arr.size() and parts<(total!=0?2:3);i++)
        {
            sum+=arr[i];
            if(sum==total/3)
            {
                parts+=1;
                sum=0;
            }
        }
        return parts==(total!=0?2:3);
    }
};