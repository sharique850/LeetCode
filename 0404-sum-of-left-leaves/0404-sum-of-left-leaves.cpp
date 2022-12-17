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
    int sm=0;
    void solve(TreeNode* &root, bool check)
    {        
        if(check && !root->left && !root->right){
            sm+=root->val;
            return;
        }
        
        if(root->left) solve(root->left, true);
        if(root->right) solve(root->right, false);
        
    }
    int sumOfLeftLeaves(TreeNode* root) {
        
        if(!root)
            return 0;
        solve(root, false);
        return sm;
        
    }
};