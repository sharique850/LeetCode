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
    
    int solveNode(TreeNode *root, int maxVal, int minVal)
    {
        if(!root) return maxVal-minVal;
        
        maxVal = max(maxVal, root->val);
        minVal = min(minVal, root->val);
        
        int l = solveNode(root->left, maxVal, minVal);
        int r = solveNode(root->right, maxVal, minVal);
        return max(l,r);
    }
    int maxAncestorDiff(TreeNode* root) {
        int maxVal=INT_MIN, minVal=INT_MAX;
        
        return solveNode(root, maxVal, minVal);
        
        
        
    }
};