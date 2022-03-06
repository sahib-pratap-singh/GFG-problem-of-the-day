class Solution{
    public:
    vector<vector<int>> computeBeforeMatrix(int n, int m, vector<vector<int>> after){
        vector<vector<int>> before(n,vector<int>(m,0));
        for(int i=n-1;i>0;i--){
            for(int j=m-1;j>0;j--){
                before[i][j]=after[i][j]-(after[i][j-1]+after[i-1][j]-after[i-1][j-1]);
            }
        }
        before[0][0]=after[0][0];
        for(int i=m-1;i>0;i--){
            before[0][i]=after[0][i]-after[0][i-1];
        }
        for(int i=n-1;i>0;i--){
            before[i][0]=after[i][0]-after[i-1][0];
        }
        return before;
    }
};