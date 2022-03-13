class Solution {
public:
	int FindWays(int n, int m, vector<vector<int>>blocked_cells){
	    vector<vector<int>> obstacleGrid(n,vector<int>(m,0));
	    for(int i=0;i<blocked_cells.size();i++){
	        obstacleGrid[blocked_cells[i][0]-1][blocked_cells[i][1]-1]=1;
	    }
	    if(obstacleGrid[0][0]==1){
            return 0;
        }
        int rows=obstacleGrid.size();
        int cols=obstacleGrid[0].size();
        obstacleGrid[0][0]=1;
        for(int i=1;i<cols;i++){
            obstacleGrid[0][i]=(obstacleGrid[0][i]==0 && obstacleGrid[0][i-1]==1)?1:0;
        }
        for(int i=1;i<rows;i++){
            obstacleGrid[i][0]=(obstacleGrid[i][0]==0 && obstacleGrid[i-1][0]==1)?1:0;
        }
        
        for(int i=1;i<rows;i++){
            for(int j=1;j<cols;j++){
                if(obstacleGrid[i][j]==1){
                    obstacleGrid[i][j]=0;
                }
                else{
                    obstacleGrid[i][j]=(obstacleGrid[i-1][j]+obstacleGrid[i][j-1])%1000000007;
                }
            }
        }
        return obstacleGrid[rows-1][cols-1];
	}
};