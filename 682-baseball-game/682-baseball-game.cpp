class Solution {
public:
    int calPoints(vector<string>& s) {
        stack<int>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=="+")
            {
                int t1=st.top();
                st.pop();
                int t2=st.top();
                st.push(t1);
                st.push(t1+t2);
            }
            else if(s[i]=="D")
            {
                st.push(2*st.top());
            }
            else if(s[i]=="C")
            {
                st.pop();
            }
            else{
                st.push(stoi(s[i]));
            }
        }
        int sum=0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};