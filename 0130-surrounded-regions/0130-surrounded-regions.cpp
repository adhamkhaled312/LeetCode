class Solution {
public:
    vector<vector<bool>> mark;
    int m, n;

    void solve(vector<vector<char>>& board) {

        if (board.empty()) return;

        m = board.size();
        n = board[0].size();

        mark.assign(m, vector<bool>(n, false));

        for (int i = 0; i < m; i++) {
            dfs(board, i, 0);
            dfs(board, i, n - 1);
        }

        for (int j = 0; j < n; j++) {
            dfs(board, 0, j);
            dfs(board, m - 1, j);
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 'O' && !mark[i][j])
                    board[i][j] = 'X';
            }
        }
    }

    void dfs(vector<vector<char>>& board, int i, int j) {

        if (i < 0 || j < 0 || i >= m || j >= n)
            return;

        if (board[i][j] == 'X' || mark[i][j])
            return;

        mark[i][j] = true;

        dfs(board, i+1, j);
        dfs(board, i-1, j);
        dfs(board, i, j+1);
        dfs(board, i, j-1);
    }
};
