class Solution {
public:
    bool checkPerfectNumber(int num) {
        int s=0;
        for(int i=1;i<num;i+=1)
            if(num%i==0)
                s+=i;
        return s==num;
    }
};