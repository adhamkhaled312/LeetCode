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
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;

        stack<TreeNode*> rightTree;
        stack<TreeNode*> leftTree;

        rightTree.push(root->right);
        leftTree.push(root->left);

        while(!rightTree.empty() && !leftTree.empty()){
            TreeNode* leftNode = leftTree.top(); leftTree.pop();
            TreeNode* rightNode = rightTree.top(); rightTree.pop();
            
            if(!leftNode && !rightNode) continue; 
            if(!leftNode || !rightNode) return false; 
            if(leftNode->val != rightNode->val) return false;

            rightTree.push(rightNode->right);
            rightTree.push(rightNode->left);
            
            leftTree.push(leftNode->left);
            leftTree.push(leftNode->right);
        }
        return true;
    }

};