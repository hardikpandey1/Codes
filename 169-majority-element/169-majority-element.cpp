class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,element=0;
        for(int i:nums){
            if(count==0)
                element=i;
            if(i==element)
                count+=1;
            else
                count-=1;
        }
        return element;
    }
};