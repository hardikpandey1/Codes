class Solution {
public:
    int largestInteger(int num) {
        string s=to_string(num);
        int n=s.length();
        for(int i=0;i<n-1;i+=1){
            int f=i;
            int maxi=s[i]-'0';
            for(int j=i+1;j<n;j+=1){
                if((s[i]-'0')%2==0 and (s[j]-'0')%2==0 and (s[j]-'0')>maxi)
                {
                    maxi=s[j]-'0';
                    f=j;
                }
                else if((s[i]-'0')%2==1 and (s[j]-'0')%2==1 and (s[j]-'0')>maxi)
                {
                    maxi=s[j]-'0';
                    f=j;
                }
            }
            swap(s[i],s[f]);
        }
        return stoi(s);
    }
};