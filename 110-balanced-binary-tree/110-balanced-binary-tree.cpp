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
    bool sum;
    int maxDepth(TreeNode* root){
        if(!root)
            return 0; 
        int l=maxDepth(root->left);
        int r=maxDepth(root->right);
        if(abs(l-r)>1)
            sum = false;
        return 1+max(l,r);
    }
    bool isBalanced(TreeNode* root) {
        sum = true;
        int temp = maxDepth(root);
        return sum;
    }
};