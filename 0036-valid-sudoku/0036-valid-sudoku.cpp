class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0; i<9; i++){
            unordered_set<char>rows;
            for(int j=0; j<9; j++){
                if(board[i][j]!='.'){
                    if(rows.count(board[i][j])!=0){
                        return false;
                    }
                    else{
                        rows.insert(board[i][j]);
                    }
                }
            }
        }
        
        for(int i=0; i<9; i++){
            unordered_set<char>cols;
            for(int j=0; j<9; j++){
                if(board[j][i]!='.'){
                    if(cols.count(board[j][i])!=0){
                        return false;
                    }
                    else{
                        cols.insert(board[j][i]);
                    }
                }
            }
        }

        map<pair<int,int>,unordered_set<char>>boxs;
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j]!='.'){
                    pair<int,int> box= {i/3, j/3};

                    if(boxs[box].count(board[i][j])!=0){
                        return false;
                    }
                    else{
                        boxs[box].insert(board[i][j]);
                    }
                }
            }
        }
        return true;
    }
};