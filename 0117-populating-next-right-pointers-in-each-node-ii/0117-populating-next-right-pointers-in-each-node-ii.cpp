/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return nullptr;
        queue<Node*>bfs;
        bfs.push(root);
        while(!bfs.empty()){
            int n=bfs.size();
            while(n--){
                Node*current=bfs.front();
                if(current->left) bfs.push(current->left);
                if(current->right) bfs.push(current->right);
                bfs.pop();
                if(n==0) current->next=nullptr;
                else current->next=bfs.front();
            }
        }
        return root;
    }
};