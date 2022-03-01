//Brute force
//Time complexity: O(n^2 * m^2)
//Space complexity: O(1)
class Solution{
    public:
    bool ValidCorner(const vector<vector<int> >& matrix)
    {
        int rows=matrix.size();
        int cols=matrix[0].size();
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==1){
                    for(int i1=i+1;i1<rows;i1++){
                        for(int j1=j+1;j1<cols;j1++){
                            if(matrix[i][j1]==1 && matrix[i1][j]==1 && matrix[i1][j1]==1){
                                return true;
                            }
                        }
                    }
                }
            }
        }
        return false;
    }
};

//Better approach
//Time complexity: O(N*M*M)
//Space complexity: O(N)
class Solution{
    public:
    bool ValidCorner(const vector<vector<int> >& matrix)
    {
       int rows = matrix.size();
       int columns = matrix[0].size();
       if (rows == 0)
          return false;

       unordered_map<int, unordered_set<int> > mp;
       for (int i = 0; i < rows; ++i) {
          for (int j = 0; j < columns - 1; ++j) {
             for (int k = j + 1; k < columns; ++k) {
                if (matrix[i][j] == 1 && matrix[i][k] == 1) {
                   if (mp.find(j) != mp.end() && mp[j].find(k) != mp[j].end())
                      return true;
                   if (mp.find(k) != mp.end() && mp[k].find(j) != mp[k].end())
                      return true;
                   mp[j].insert(k);
                   mp[k].insert(j);
                }
             }
          }
       }
       return false;
    }
};