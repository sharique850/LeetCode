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
    bool flag=false;
    
    void solve(TreeNode* root, int sm, int targetSum)
    {
        if(root==NULL) return;
        
        sm+=root->val;
        if(sm==targetSum && !root->left && !root->right)
        {
            flag=true;
            return;
        }
        
        solve(root->left, sm, targetSum);
        solve(root->right, sm, targetSum);
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sm=0;
        solve(root, sm, targetSum);
        return flag;
        
    }
};