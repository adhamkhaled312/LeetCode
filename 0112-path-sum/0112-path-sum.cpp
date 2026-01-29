class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root) return false;

        stack<pair<TreeNode*, int>> dfs;

        dfs.push({root, root->val});

        while (!dfs.empty()) {
            auto [curr, sum] = dfs.top();
            dfs.pop();

            if (!curr->left && !curr->right && sum == targetSum)
                return true;

            if (curr->right)
                dfs.push({curr->right, sum + curr->right->val});

            if (curr->left)
                dfs.push({curr->left, sum + curr->left->val});
        }

        return false;
    }
};
