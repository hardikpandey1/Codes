class Solution {
public:
    bool judgeSquareSum(int c) {
        int b=sqrt(c);
        int a=0;
        while(a<=b){
            if(c-a*a==b*b)
                return true;
            int m=a+(b-a)/2;
            if(a*a<c-b*b)
                a=(m*m<c-b*b)?m+1:a+1;
            else
                b=(a*a>c-m*m)?m-1:b-1;
        }
        return false;
    }
};