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
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return NULL;
        stack<TreeNode*>s;
        s.push(root);
        
        while(!s.empty())
        {
            TreeNode* current=s.top();
            s.pop();
            TreeNode* t=current->left;
            current->left=current->right;
            current->right=t;
            if(current->left!=NULL)
                s.push(current->left);
            if(current->right!=NULL)
                s.push(current->right);
        }
        return root;
        
    }
};
