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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>firstLeafs;
        vector<int>secondLeafs;
        getLeafs(root1,firstLeafs);
        getLeafs(root2,secondLeafs);
        return firstLeafs==secondLeafs;
    }
    void getLeafs(TreeNode* node, vector<int>&leaf){
        if(node->right==NULL && node->left==NULL){
            leaf.push_back(node->val);
            return;
        }
        if(node->left!=NULL) getLeafs(node->left,leaf);
        if(node->right!=NULL) getLeafs(node->right,leaf);
    }
};