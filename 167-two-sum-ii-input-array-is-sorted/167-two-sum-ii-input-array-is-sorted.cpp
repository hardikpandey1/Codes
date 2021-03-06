class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>v;
        int i=0,j=numbers.size()-1;
        while(i<j){
            if(numbers[i]+numbers[j] == target)
            {
                v.push_back(i+1);
                v.push_back(j+1);
                break;
            }
            else if(numbers[i]+numbers[j] < target)
                i+=1;
            else
                j-=1;
        }
        return v;
    }
};