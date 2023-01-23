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
    
    set<int> s;
    // vector<int> v;
    
//     void inorder(TreeNode *root)
//     {
//         if(!root) return;
        
//         inorder(root->left);
//         v.push_back(root->val);
//         inorder(root->right);
        
//     }
    bool findTarget(TreeNode* root, int k) {
        
        // inorder(root);
        // int l=0,r=v.size()-1;
        // while(l<r)
        // {
        //     if(v[l]+v[r]==k) return true;
        //     else if(v[l]+v[r]<k) l++;
        //     else r--;
        // }
        // return false;
        
        if(!root) return false;
        if(s.find(k-root->val)!=s.end()) return true;
        s.insert(root->val);
        return findTarget(root->left, k) || findTarget(root->right,k);
        
    }
};