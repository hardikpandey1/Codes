class Solution {
public:
    string reverseWords(string s) {
        s=s+" ";
        string ans;
        int start=0,c=0,i;
        for(i=0;i<s.length();i++){
            if(s[i]==' '){
                string p=s.substr(start,c);
                ans=p+" "+ans;
                while(s[i]==' ')
                    i+=1;
                start=i;
                c=1;
            }
            else
                c+=1;
        }
        int n=ans.length()-1;
        while(ans[n]==' '){
            ans.erase(n);
            n-=1;
        }
        return ans;
    }
};