/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    static int res;
    public int solve(TreeNode node){
        if(node==null){
            return 0;
        }
        else{
            int l=solve(node.left);
            int r=solve(node.right);
            res=Math.max(res,l+r+node.val);
            return Math.max(0,Math.max(l,r)+node.val);
        }

    }
    public int maxPathSum(TreeNode root) {
        res=root.val;
        solve(root);
        return res;
        
    }
}
