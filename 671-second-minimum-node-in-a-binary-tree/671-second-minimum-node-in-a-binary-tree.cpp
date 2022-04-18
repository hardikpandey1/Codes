/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void in(TreeNode* root, vector<int>&v){
        if(!root)
            return;
        in(root->left,v);
        v.push_back(root->val);
        in(root->right,v);
    }
    int findSecondMinimumValue(TreeNode* root) {
        vector<int>v;
        in(root,v);
        int m=-1;
        sort(begin(v),end(v));
        for(int i=1;i<v.size();i++){
            if(v[i]!=v[i-1]){
            m=v[i];
                break;
            }
        }
        return m;
    }
};