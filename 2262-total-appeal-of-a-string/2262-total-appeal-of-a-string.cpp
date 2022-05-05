class Solution {
public:
    
    long long count(string s, char ch){
        long long res=0;
        long long cnt=0;
        long long len=s.length();
        for(long long i=0;i<len;i++){
            if(s[i]==ch)
            {
                res+=((cnt)*(cnt+1))/2;
                cnt=0;
            }
            else
                cnt+=1;
        }
        res+=((cnt)*(cnt+1))/2;
        return (len*(len+1))/2-res;
    }
    
    long long appealSum(string s) {
        long long total=0;
        for(char ch='a';ch<='z';ch+=1)
            total+=count(s,ch);
        return total;
    }
};