class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            int num=arr[i]*2;
            for(int j=0;j<arr.size();j++)
                if(i!=j and num==arr[j])
                    return true;
        }
        return false;
    }
};