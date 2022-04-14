class Solution {
public:
    int self(int n){
        int num=n;
        while(n){
            if(n%10==0)
                return false;
            else if( n%10 !=0 and num%(n%10)!=0)
                return false;
            else
                n/=10;
        }
        return true;
    }
    
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>v;
        for(int i=left;i<=right;i+=1)
            if(self(i))
                v.push_back(i);
        return v;
    }
};