class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n=s.length();
        stack<int>st;
        string ans="";
        int i=0;
        while(i<n){
            if(s[i]=='(')
                st.push(i);
            else if(s[i]==')')
            {
                if(!st.empty())
                    st.pop();
                else
                    s[i]='#';
            }
            i+=1;
        }
        while(!st.empty()){
            s[st.top()]='#';
            st.pop();
        }
        i=0;
        while(i<n){
            if(s[i]!='#')
                ans+=s[i];
            i+=1;
        }
        return ans;
    }
};