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
    string tree2str(TreeNode* root) {
        if(!root)
            return "";
        string lstring=tree2str(root->left);
        string rstring=tree2str(root->right);
        string finalstring=to_string(root->val);
        if(lstring.size()==0 and rstring.size()==0)
            return finalstring;
        finalstring+='('+lstring+')';
        if(rstring.size())
            finalstring+='('+rstring+')';
        return finalstring;
    }
};