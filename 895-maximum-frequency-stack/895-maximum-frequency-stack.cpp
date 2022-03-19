class FreqStack {
    priority_queue<vector<int>>pq;
    unordered_map<int,int>mp;
    int count=0;
public:
    FreqStack() {
        
    }
    
    void push(int val) {
        mp[val]+=1;
        pq.push({mp[val],count++,val});
    }
    
    int pop() {
        auto max=pq.top();
        pq.pop();
        mp[max[2]]-=1;
        return max[2];
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */