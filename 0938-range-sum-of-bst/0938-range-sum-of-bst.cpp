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
    int rangeSumBST(TreeNode* root, int low, int high) {
        queue<TreeNode*> q;
        int ret=0;
        q.push(root);
        while(!q.empty()){
            TreeNode* temp=q.front();
            if(temp->val >= high){
                if(temp->left) q.push(temp->left);
            }
            else if(temp->val <=low){
                if(temp->right) q.push(temp->right);
            }
            else {
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            if(temp->val >=low && temp->val <= high ){
                ret+=temp->val;
            }
            q.pop();
        }
        return ret;
    }
};