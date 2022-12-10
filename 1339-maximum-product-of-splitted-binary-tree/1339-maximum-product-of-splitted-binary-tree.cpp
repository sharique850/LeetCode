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
    
    long long totalSum=0,ans=0;
    long long M = 1e9+7;
    
    long long Solve(TreeNode *root)
    {
        if(!root) return false;
        
        long long sm = Solve(root->left) + Solve(root->right) + root->val;
        ans = max(ans, (totalSum-sm)*sm);
        return sm;
    }
    int maxProduct(TreeNode* root) {
        totalSum = Solve(root);
        Solve(root);
        return ans%M;
    }
};