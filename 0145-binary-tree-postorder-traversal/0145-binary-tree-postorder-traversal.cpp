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
    
    void dfs(TreeNode *node, vector<int> &postorder) {
        if(node == NULL) return; 
         
        dfs(node->left, postorder); 
        dfs(node->right, postorder);
        postorder.push_back(node->val);
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int> postorder;
        dfs(root, postorder);
        return postorder;
    }
};