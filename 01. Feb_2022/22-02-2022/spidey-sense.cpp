//DFS
class Solution{

    public:
    int solve(int i, int j,int d, int m, int n, vector<vector<char> >& matrix, vector<vector<int>> &visited){
        if(i<0 || i>=m || j<0 || j>=n || matrix[i][j]=='W' || visited[i][j]==1){
            return INT_MAX;
        }
        if(matrix[i][j]=='B'){
            return d;
        }
        visited[i][j]=1;
        int top=solve(i-1,j,d+1,m,n,matrix,visited);
        int right=solve(i,j+1,d+1,m,n,matrix,visited);
        int bottom=solve(i+1,j,d+1,m,n,matrix,visited);
        int left=solve(i,j-1,d+1,m,n,matrix,visited);
        visited[i][j]=0;
        return min(top,min(right,min(bottom,left)));
    }
    vector<vector<int> > findDistance(vector<vector<char> >& matrix, int m, int n) 
    { 
        vector<vector<int>> result(m,vector<int>(n,0));
        vector<vector<int>> visited(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]=='O'){
                    int val=solve(i,j,0,m,n,matrix,visited);
                    result[i][j]=val==INT_MAX?-1:val;
                }
                else if(matrix[i][j]=='B'){
                    result[i][j]=0;
                }
                else if(matrix[i][j]=='W'){
                    result[i][j]=-1;
                }
            }
        }
        return result;
    } 
};

//BFS
class Solution{

    public:
    vector<vector<int>> findDistance(vector<vector<char> >& grid, int m, int n) { 
            
            vector<vector<int>> ans(m,vector<int>(n,INT_MAX));
            
            queue<pair<int,int>> q;
            
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(grid[i][j]=='B'){
                        ans[i][j]=0;
                        q.push({i,j});
                    } 
                    else if(grid[i][j]=='W') ans[i][j]=-1;
                }
            }
            
            int dx[4]={0,1,0,-1};
            int dy[4]={1,0,-1,0};
            
            while(!q.empty()){
                int i=q.front().first;
                int j=q.front().second;
                
                q.pop();
                
                for(int k=0;k<4;k++){
                    int x=i+dx[k]; 
                    int y=j+dy[k];
                    
                    if(x>=0 && x<m && j>=0 && j<n
                        && grid[x][y]=='O'
                        && ans[x][y]>ans[i][j]+1){
                         ans[x][y]=ans[i][j]+1;
                         q.push({x,y});
                    }
                }
            }
            
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(ans[i][j]==INT_MAX) ans[i][j]=-1;
                }
            }
            
            return ans;
        }
    };