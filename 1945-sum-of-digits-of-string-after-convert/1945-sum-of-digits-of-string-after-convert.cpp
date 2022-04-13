class Solution {
public:
    int getLucky(string s, int k) {
        long long sum=0;
        for(char c:s){
            int num=c-'a'+1;
            if(num>9)
                sum+=num/10+num%10;
            else
                sum+=num;
        }
        k-=1;
        long long a=sum;
        while(k--){
            sum=0;
            while(a){
            sum+=a%10;
            a/=10;
            }
        a=sum;
    }
        return a;
    }
};