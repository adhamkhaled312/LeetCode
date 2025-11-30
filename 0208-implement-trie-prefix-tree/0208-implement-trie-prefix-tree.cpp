class Node{
    public:
    Node *child[26];
    bool completeWord = false;
    Node(){
        for(int i=0;i<26;i++){
            child[i]=nullptr;
        }
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
            int chIndex=word[i]-'a';
            if(!temp->child[chIndex]){
                temp->child[chIndex] = new Node();
            }
            temp=temp->child[chIndex];
        }
        temp->completeWord=true;
    }
    
    bool search(string word) {
        Node* temp=root;
        for(int i=0;i<word.size();i++){
            int chIndex=word[i]-'a';
            if(!temp->child[chIndex]){
                return false;
            }
            temp=temp->child[chIndex];
        }
        return temp->completeWord;
    }
    
    bool startsWith(string prefix) {
        Node* temp=root;
        for(int i=0;i<prefix.size();i++){
            int chIndex=prefix[i]-'a';
            if(!temp->child[chIndex]){
                return false;
            }
            temp=temp->child[chIndex];
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