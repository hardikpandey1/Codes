class Solution {
public:
    int subtractProductAndSum(int n) {
        int p=1;
        int s=0;
        while(n){
            int num=n%10;
            s+=num;
            p*=num;
            n/=10;
        }
        return p-s;
    }
};