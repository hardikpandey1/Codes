class Solution {
public:
    unordered_map<int,int>mp;
    TreeNode* inorder(TreeNode* root){
        if(root==NULL)
            return NULL;
        mp[root->val]+=1;
        inorder(root->left);
        inorder(root->right);
        return NULL;
    }
    vector<int> findMode(TreeNode* root) {
     inorder(root);
        priority_queue<pair<int,int>>pq;
        for(auto it:mp)
            pq.push({it.second,it.first});
        int maxc=pq.top().first;
        vector<int>res;
        while(!pq.empty() and pq.top().first==maxc)
        {
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};