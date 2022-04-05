class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int m=target.size(),n=arr.size();
        if(m!=n)
            return false;
        sort(begin(target),end(target));
        sort(begin(arr),end(arr));
        for(int i=0;i<target.size();i++)
            if(target[i]!=arr[i])
                return false;
        return true;
    }
};