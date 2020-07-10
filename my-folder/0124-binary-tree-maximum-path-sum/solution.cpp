class Solution {
    // int answer;
    int dfs(TreeNode*root,int&answer){
        if(!root){
            return 0;
        }
        int x = dfs(root->left,answer);
        int y = dfs(root->right,answer);
        answer = max(answer,x+y+root->val);
        return max(0,root->val+max(x,y));
    }
public:
    int maxPathSum(TreeNode* root) {
        int answer = INT_MIN;
        dfs(root,answer);
        return answer;
    }
};
