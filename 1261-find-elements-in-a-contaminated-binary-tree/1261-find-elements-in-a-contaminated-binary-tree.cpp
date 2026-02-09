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
class FindElements {
public:
    unordered_set<int> values;
    FindElements(TreeNode* root) {
        root->val=0;
        values.insert(0);
        dfs(root,-1);
    }
    
    bool find(int target) {
        return values.count(target);
    }
    void dfs(TreeNode* root, int value){
        if(root==nullptr) return;
        if(value != -1) {
            root->val = value;
            values.insert(value);
        }
        dfs(root->left, root->val *2 +1 );
        dfs(root->right, root->val *2 +2);
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */