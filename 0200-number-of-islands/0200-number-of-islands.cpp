class Solution {
public:
    int m,n;
    int numIslands(vector<vector<char>>& grid) {
        int ret=0;
        m=grid.size();
        n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    ret++;
                    solve(grid,i,j);
                }
            }
        }
        
        return ret;
    }
    void solve(vector<vector<char>>& grid, int i,int j){
        if (i < 0 || j < 0 || i >= m || j >= n)
            return;
        if(grid[i][j]=='1'){
            grid[i][j]='0';
            solve(grid,i+1,j);
            solve(grid,i-1,j);
            solve(grid,i,j+1);
            solve(grid,i,j-1);
        }
    }
};