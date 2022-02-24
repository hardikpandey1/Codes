class Solution {
public:
    vector<long long> maximumEvenSplit(long long n) {
        if(n&1)
            return {};
        vector<long long>a;
        long long i=2;
        long long s=0;
        while((s+i)<=n){
            a.push_back(i);
            s+=i;
            i+=2;
        }
        int si=a.size();
        a[si-1]+=(n-s);
        return a;
    }
};