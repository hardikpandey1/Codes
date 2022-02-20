class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1;
        while(l<h){
            int mid=(l+h)/2;
            if(nums[mid]>nums[h])
                l=mid+1;
            else
                h=mid;
        }
        int r=l;
        l=0,h=nums.size()-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            int real=(mid+r)%nums.size();
            if(nums[real]==target)
                return real;
            else if(nums[real]<target)
                l=mid+1;
            else
                h=mid-1;
        }
        return -1;
    }
};