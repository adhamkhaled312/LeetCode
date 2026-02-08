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
    int getMinimumDifference(TreeNode* root) {
        int minValue=INT_MAX;
        int prev=-1;
        dfs(root,prev,minValue);
        return minValue;
    }
    void dfs(TreeNode* node,int& prev,int& minValue){
        if(!node) return;
        dfs(node->left,prev,minValue);
        if(prev!=-1)
            minValue=min(minValue,abs(prev-node->val));
        prev=node->val;
        dfs(node->right,prev,minValue);   
    }
};