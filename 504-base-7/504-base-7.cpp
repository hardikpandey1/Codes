class Solution {
public:
    string convertToBase7(int num) {
        if(!num)
            return "0";
        string st="";
        int n=abs(num);
        while(n){
            st+=(n%7+'0');
            n/=7;
        }
        if(num<0)
            st+='-';
        reverse(st.begin(),st.end());
        return st;
    }
};