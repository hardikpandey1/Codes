class Solution {
public:
    int myAtoi(string s) {
        int sign=1;
        int result=0;
        int index=0;
        int n=s.length();
        while(index<n and s[index]==' ')
            index+=1;
        if(index<n and s[index]=='+')
        {
            sign=1;
            index+=1;
        }
        else if(index<n and s[index]=='-')
        {
            sign=-1;
            index+=1;
        }
        while(index<n and isdigit(s[index])){
            int digit=s[index]-'0';
            if((result>INT_MAX/10) or (result==INT_MAX/10 and digit>INT_MAX%10))
                return sign==1?INT_MAX:INT_MIN;
            result=10*result+digit;
            index+=1;
        }
        return sign*result;
    }
};