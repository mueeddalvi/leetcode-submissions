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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        stack<TreeNode*>s1;
        stack<TreeNode*>s2;
        
        s1.push(root);
        if(root==NULL)
            return res;
        while(!s1.empty() or !s2.empty())
        {
            vector<int>temp;
            
            while(!s1.empty())
            {
                temp.push_back(s1.top()->val);
                if(s1.top()->left!=NULL)
                    s2.push(s1.top()->left);
                
                if(s1.top()->right!=NULL)
                    s2.push(s1.top()->right);
                s1.pop();
            }
            res.push_back(temp);
            temp.clear();
            
            while(!s2.empty())
            {
                temp.push_back(s2.top()->val);
                 if(s2.top()->right!=NULL)
                    s1.push(s2.top()->right);
                
                if(s2.top()->left!=NULL)
                    s1.push(s2.top()->left);
                s2.pop();
            }
            if(temp.size()>0)
                res.push_back(temp);
            temp.clear();
        }
        
        return res;
        
    }
};
