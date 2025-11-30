class Node{
    public:
    unordered_map<char,Node*>child;
    bool completeWord;
    Node(){
        completeWord=false;
    }
};
class Trie {
public:
    Node* root;
    Trie() {
        root = new Node();
    }
    void insert(string word) {
        Node* temp=root;
        for(int i=0;i<word.size();i++){
            if(temp->child.find(word[i])==temp->child.end()){
                temp->child[word[i]] = new Node();
            }
            temp=temp->child[word[i]];
        }
        temp->completeWord=true;
    }
    
    bool search(string word) {
        Node* temp=root;
        for(int i=0;i<word.size();i++){
            if(temp->child.find(word[i])==temp->child.end()){
                return false;
            }
            temp=temp->child[word[i]];
        }
        return temp->completeWord;
    }
    
    bool startsWith(string prefix) {
        Node* temp=root;
        for(int i=0;i<prefix.size();i++){
            if(temp->child.find(prefix[i])==temp->child.end()){
                return false;
            }
            temp=temp->child[prefix[i]];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */