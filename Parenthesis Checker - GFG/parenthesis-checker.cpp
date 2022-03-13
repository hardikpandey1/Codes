// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    
    bool arepair(char opening, char closing)
    {
        if(opening=='(' and closing==')')
        return true;
        else if(opening=='{' and closing=='}')
        return true;
        else if(opening=='[' and closing==']')
        return true;
        return false;
    }
    bool ispar(string x)
    {
        // Your code here
        int n=x.length();
        stack<char>s;
        for(int i=0;i<n;i++){
            if(x[i]=='(' or x[i]=='{' or x[i]=='[')
            s.push(x[i]);
            else{
                if(s.empty() or !arepair(s.top(),x[i]))
                return false;
                else
                s.pop();
            }
        }
        return s.empty()?true:false;
    }
};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends