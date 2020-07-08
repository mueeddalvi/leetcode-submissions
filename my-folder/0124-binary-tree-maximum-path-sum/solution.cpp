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

    int maxPathSum(TreeNode* root) {
        
        int res=INT_MIN;
        helper(root,res);
        return res;
    }
    
    int helper(TreeNode* root,int &res)
    {
        if(root==NULL)
            return 0;
        int s1=helper(root->left,res);
        int s2=helper(root->right,res);
        
        int temp=max(max(s1,s2)+root->val,root->val);//CHECKING FOR NEGATIVE
        int ans=max(temp,s1+s2+root->val);
        
        res=max(res,ans);
        return temp;
    }
};
