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
class FindElements {

    Set<Integer> values = new HashSet<>();
    public FindElements(TreeNode root) {
        root.val=0;
        values.add(0);
        dfs(root,-1);
    }
    
    public boolean find(int target) {
        return values.contains(target);
    }
    public void dfs(TreeNode root, int value){
        if(root == null) return;
        if(value != -1){
            root.val=value;
            values.add(value);
        }
        dfs(root.left,root.val*2+1);
        dfs(root.right,root.val*2+2);
    }
}

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements obj = new FindElements(root);
 * boolean param_1 = obj.find(target);
 */