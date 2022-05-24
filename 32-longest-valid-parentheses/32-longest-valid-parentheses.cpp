class Solution {
public:
    int longestValidParentheses(string st) {
        stack<int>s;
        s.push(-1);
        int m=0;
        for(int i=0;i<st.size();i++){
            if(st[i]=='(')
                s.push(i);
            else{
                s.pop();
                if(s.empty())
                    s.push(i);
                else
                    m=max(m,i-s.top());
            }
        }
        return m;
    }
};