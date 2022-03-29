class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(st.empty())
                st.push(s[i]);
            else if(s[i]!=st.top())
                st.push(s[i]);
            else
                st.pop();
        }
        string ss;
        while(!st.empty()){
            ss+=st.top();
            st.pop();
        }
        reverse(ss.begin(),ss.end());
        return ss;
    }
};