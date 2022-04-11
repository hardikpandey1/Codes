class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st;
        stack<char>tt;
        for(int i=0;i<s.length();i++){
            if(s[i]=='#' and !st.empty())
                st.pop();
            else if(s[i]=='#')
                continue;
            else
                st.push(s[i]);
        }
        for(int i=0;i<t.length();i++){
            if(t[i]=='#' and !tt.empty())
                tt.pop();
            else if(t[i]=='#')
                continue;
            else
                tt.push(t[i]);
        }
        string sst="";
        string ttt="";
        while(!st.empty()){
            sst+=st.top();
            st.pop();
        }
        
        while(!tt.empty()){
            ttt+=tt.top();
            tt.pop();
        }
        cout<<sst<<" "<<ttt;
        return sst==ttt;
    }
};