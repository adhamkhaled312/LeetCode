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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> bfs;
        int level=0;
        double temp=0;
        int count=0;
        vector<double>ret;
        bfs.push(root);
        while(!bfs.empty()){
            int size=bfs.size();
            while(size--){
                count++;
                temp+=(double)bfs.front()->val;
                if(bfs.front()->right) bfs.push(bfs.front()->right);
                if(bfs.front()->left) bfs.push(bfs.front()->left);
                bfs.pop();
            }
            ret.push_back(temp/count);
            count=0;
            temp=0;
        }
        return ret;
    }
};