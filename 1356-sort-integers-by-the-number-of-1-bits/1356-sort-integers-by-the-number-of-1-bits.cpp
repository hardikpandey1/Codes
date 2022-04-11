class Solution {
public:
    int one(int a){
        int c=0;
        while(a)
        {
            if(a&1)
                c+=1;
            a/=2;
        }
        return c;
    }
    vector<int> sortByBits(vector<int>& arr) {
        priority_queue<pair<int,int>>p;
        for(int i=0;i<arr.size();i++)
            p.push({one(arr[i]),arr[i]});
        vector<int>index;
        int i=0;
        while(i<arr.size())
        {
            pair<int,int>t=p.top();
            index.push_back(t.second);
            p.pop();
            i+=1;
        }
        //for(int i=0;i<index.size();i++)
        //    index[i]=arr[index[i]];
        reverse(begin(index),end(index));
        return index;
    }
};