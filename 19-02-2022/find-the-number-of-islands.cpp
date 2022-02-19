#include<iostream>

//Using recursion
class Solution {
  public:
    void markiland(int i, int j, int rows,int cols, vector<vector<char>>& grid){
        if(i<0 || i>=rows || j<0 || j>=cols || grid[i][j]=='0'){
            return;
        }
        grid[i][j]='0';
        markiland(i+1,j,rows,cols,grid);
        markiland(i,j+1,rows,cols,grid);
        markiland(i-1,j,rows,cols,grid);
        markiland(i,j-1,rows,cols,grid);
        markiland(i+1,j-1,rows,cols,grid);
        markiland(i-1,j+1,rows,cols,grid);
        markiland(i+1,j+1,rows,cols,grid);
        markiland(i-1,j-1,rows,cols,grid);
    }
    int numIslands(vector<vector<char>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();
        int cnt=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]=='1'){
                    markiland(i,j,rows,cols,grid);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};