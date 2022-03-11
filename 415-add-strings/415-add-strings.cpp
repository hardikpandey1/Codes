class Solution {
public:
    string addStrings(string num1, string num2) {
        int s,k=0,c=0;
        string st="";
        int n1=num1.size()-1,n2=num2.size()-1;
        while(n1>=0 or n2>=0 or c){
            s=0;
            if(n1>=0)
            s+=(num1[n1]-'0');
            if(n2>=0)
            s+=(num2[n2]-'0');
            s+=c;
            c=s/10;
            k=s%10;
            st=to_string(k)+st;
            n1-=1;
            n2-=1;
        }
        return st;
    }
};