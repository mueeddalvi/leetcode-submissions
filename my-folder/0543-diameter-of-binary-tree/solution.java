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
            res=Math.max(res,l+r);
            return 1+Math.max(l,r);
        }
    }
    public int diameterOfBinaryTree(TreeNode root) {

        res=Integer.MIN_VALUE;
        solve(root);
        return res;
        
        
    }
}
